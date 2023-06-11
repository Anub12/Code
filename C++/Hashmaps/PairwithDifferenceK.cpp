#include <iostream>
#include <unordered_map>
using namespace std;

int pairswithDifferencK(int arr[], int n, int K) {
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++) {
        map[arr[i]]++;
    }
    for(auto it: map) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}

int main() {
    // cout << "Pair with difference K" << endl;
    int arr[] = { 5, 1, 2, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 4;
    int z = pairswithDifferencK(arr, n, K);


    return 0;
}