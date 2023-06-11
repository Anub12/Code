
// knight's moves on a chessboard.(dp)


#include <iostream>
#include <queue>

#define ll long long
#define eb emplace_back
using namespace std;

const int mobi = 1e3 + 1;

void fun(ll a, ll b, ll n, ll m, ll dp[][mobi], queue<pair<ll, ll>> q) {

	q.push(make_pair(a, b));
	dp[a][b] = -1;
	ll count, cnt = 0;
	while (q.empty() == false) {
		count = q.size();
		cnt++;

		while (count > 0) {

			ll ch1 = q.front().first;
			ll ch2 = q.front().second;
			q.pop();

			for (ll i = 1; i <= n; ++i) {
				for (ll j = 1; j <= m; ++j) {
					if ((abs(i - ch1) + abs(j - ch2) == 3) && (i != ch1) && (j != ch2)) {
						//	cout << i << " " << j << endl;
						if (dp[i][j] == 0) {
							dp[i][j] = cnt;
							q.push(make_pair(i, j));
						}

					}
				}
			}

			count--;
		}

	}

}


void solve() {

	queue<pair<ll, ll>> q;

	ll x, y, n, m;
	cin >> x >> y >> n >> m;

	ll dp[mobi][mobi] = {};

	fun(1, 1, n, m, dp, q);

	
	for (int i = n; i >= 1; --i) {
		for (int j = 1; j <= m; ++j) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	


	ll sum = 0;
	for (ll i = x; i <= n; ++i) {
		for (ll j = y; j <= m; ++j) {
			sum += dp[i][j];
		}
	}

	int mod = 1e9 + 7;

	cout << sum % mod << endl;


}


int main() {

	int test;
	cin >> test;
	while (test-- > 0) {
		solve();
	}


	return 0;
}
