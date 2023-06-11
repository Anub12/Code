/* #include <bits/stdc++.h>
using namespace std;

int minSteps(int n) {
  if (n <= 1)
    return 0;

  int x = minSteps(n - 1);
  int y = INT_MAX, z = INT_MAX;
  if (n % 2 == 0)
    y = minSteps(n / 2);
  if (n % 3 == 0)
    z = minSteps(n / 3);

  int ans = min(x, min(y, z)) + 1;
  return ans;
}

int main() {

  int n;
  cin >> n;
  cout << minSteps(n) << endl;

  return 0;
} */

/* Memoization */

#include <bits/stdc++.h>
using namespace std;

int minStepsHelper(int n, int *ans) {
  if (n <= 1)
    return 0;

  if (ans[n] != -1)
    return ans[n];

  int x = minStepsHelper(n - 1, ans);
  int y = INT_MAX, z = INT_MAX;

  if (n % 2 == 0) {
    y = minStepsHelper(n / 2, ans);
  }
  if (n % 3 == 0) {
    z = minStepsHelper(n / 3, ans);
  }
  int output = min(x, min(y, z));
  ans[n] = output;
  return output;
}

int minSteps(int n) {
  int *ans = new int[n + 1];
  for (int i = 0; i <= n; i++) {
    ans[i] = -1;
  }
  return minStepsHelper(n, ans);
}

int main() {
  int a;
  cin >> a;
  int z = minSteps(a);
  cout << z << endl;

  return 0;
}