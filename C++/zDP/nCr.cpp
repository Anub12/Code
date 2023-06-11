#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
  if (n == 0) {
    return 1;
  }
  int smallOutput = fact(n - 1);
  return n * smallOutput;
}

int nCr(int n, int r) {
  return fact(n) / (fact(r) * fact(n - r));
}

int main() {
  cout << "Type value of n and r in nCr with a space respectively: ";
  int n, r;
  cin >> n >> r;
  int output = nCr(n, r);
  cout << "The output is: " << output << endl;

  return 0;
}