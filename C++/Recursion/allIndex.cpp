#include <iostream>
using namespace std;

int allIndexes(int arr[], int size, int x, int output[]) {
    if(size == 0) {
        return 0;
    }
    int m = allIndexes(arr, size-1, x, output);
    if(arr[size-1] == x){
        output[m] = size-1;
        return m+1;
    }
    else {
        return m;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 6, 7, 2, 8};
    int size = 10;
    int x = 2;
    int output[] = {};
    int z = allIndexes(arr, size, x, output);
    for(int i = 0; i < z; i++) {
        cout << output[i] << " ";
    }
    // cout << z << endl;

    return 0;
}