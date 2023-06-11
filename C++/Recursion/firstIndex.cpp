#include <iostream>
using namespace std;

// int firstIndex(int arr[], int size, int x) {
//     if(size <= 0) {
//         return -1;
//     }
//     if(arr[size] == x) {
//         return size;
//     }
//     firstIndex(arr+1, size-1, x);
// }

int firstIndex(int arr[], int size, int x, int currIndex) {
    if(size <= 0) {
        return -1;
    }
    if(arr[currIndex] == x) {
        return currIndex;
    }
    return firstIndex(arr, size, x, currIndex+1);
}

int main() {
    int arr[] = { 9, 8, 10, 8 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    int output = firstIndex(arr, size, x, 0);
    cout << "The output of the problem is : " << output;

    return 0;
}


// I tried to find the first occurence but accidentally done with the code of last occurence.