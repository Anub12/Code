/* The bottom-up approach (to dynamic programming) consists in first looking at
the "smaller" subproblems, and then solve the larger subproblems using the
solution to the smaller problems.

The top-down consists in solving the problem in a "natural manner" and check if
you have calculated the solution to the subproblem before.

 */

#include <bits/stdc++.h>
using namespace std;

int nPr(int n, int r) {
  int P[n + 1][r + 1];

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= min(i, r); j++) {
      // Base Cases
      if (j == 0)
        P[i][j] = 1;

      else
        P[i][j] = P[i - 1][j] + (j * P[i - 1][j - 1]);

      P[i][j + 1] = 0;
    }
  }
  return P[n][r];
}
// This is the main function or driver function.
int main() {
  int n, r;
  cin >> n >> r;
  cout << nPr(n, r);

  return 0;
}