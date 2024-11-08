#include <bits/stdc++.h>
using namespace std;

int minCount(int n) {
  int *arr = new int[n + 1];
  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i <= n; ++i) {
    arr[i] = INT_MAX;
    for (int j = 1; i - (j * j) >= 0; ++j) {
      arr[i] = min(arr[i], arr[i - (j * j)]);
    }
    arr[i] += 1;
  }
  int result = arr[n];
  delete[] arr;
  return result;
}

int main() {
  cout << minCount(125);

  return 0;
}
