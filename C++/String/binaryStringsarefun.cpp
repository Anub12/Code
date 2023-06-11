#include <bits/stdc++.h>
using namespace std;

void fun(string s, int n){
    int ans = 0, temp = 1;
    for(int i = 1; i <= n; i++){
        if(s[i] != s[i-1])
            temp = 1;
        else
            temp *= 2;
        temp  %= 998244353;
        ans += temp;
        ans %= 998244353;
    }
    cout << ans << endl;
}


int main(){
    int t;
    cin >> t;
    int n;
    string s;
    while(t--){
        cin >> n >> s;
        fun(s, n);
    }

    return 0;
}