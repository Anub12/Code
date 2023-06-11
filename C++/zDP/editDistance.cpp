#include <bits/stdc++.h>
using namespace std;

// Brute Force
int min(int x, int y, int z) {
  // there
  // been
  // no
  // purpose
  return min(min(x, y), z);
}

int editDist(string str1, string str2, int m, int n) {
  if (m == 0)
    return n;

  if (n == 0)
    return m;

  if (str1[m - 1] == str2[n - 1])
    return editDist(str1, str2, m - 1, n - 1);

  return 1 + min(editDist(str1, str2, m, n - 1), editDist(str1, str2, m - 1, n),
                 editDist(str1, str2, m - 1, n - 1));
}

int main() {
  string str1 = "abcd";
  string str2 = "dacb";
  int m = str1.length();
  int n = str2.length();
  int ways = editDist(str1, str2, m, n);
  cout << "The output is: " << ways << endl;

  return 0;
}