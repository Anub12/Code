#include <bits/stdc++.h>
using namespace std;

int count(int coins[], int n, int sum) {
  int i, j, x, y;
  int table[sum + 1][n];
  for (i = 0; i < n; i++) {
    table[0][i] = 1;
    cout << table[0][i] << " ";
  }

  for (i = 1; i < sum + 1; i++) {
    for (j = 0; j < n; j++) {
      x = (i - coins[j] >= 0) ? table[i - coins[j]][j] : 0;
      y = (j >= 1) ? table[i][j - 1] : 0;
      table[i][j] = x + y;
      cout << table[i][j] << " ";
    }
  }
  return table[sum][n - 1];
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("ipt.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif
  int coins[] = {};
  for (int i = 0; i < 3; i++) {
    cin >> coins[i];
  }
  int n;
  cin >> n;
  int sum;
  cin >> sum;
  cout << count(coins, n, sum);

  return 0;
}
