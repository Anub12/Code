#include <bits/stdc++.h>
using namespace std;

int fib_3(int n) {
  int *ans = new int[n + 1];

  ans[0] = 0;
  ans[1] = 1;
  for (int i = 2; i <= n; i++) {
    ans[i] = ans[i - 1] + ans[i - 2];
  }
  return ans[n];
}

int fib_helper(int n, int *ans) {
  if (n <= 1)
    return 1;

  if (ans[n] != -1) {
    return ans[n];
  }

  int a = fib_helper(n - 1, ans);
  int b = fib_helper(n - 2, ans);

  ans[n] = a + b;
  return ans[n];
}

int fib_2(int n) {
  int *ans = new int[n + 1];
  for (int i = 0; i <= n; i++){
    ans[i] = -1;
  }
  return fib_helper(n, ans);
}

int main() {
  int z = fib_3(44);
  cout << "The value is: " << z << endl;

  return 0;
}