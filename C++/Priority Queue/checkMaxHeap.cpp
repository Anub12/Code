#include <iostream>
#include <queue>
using namespace std;

bool checkMaxHeap(int arr[], int n) {
    for(int i = 0; i < (n-2)/2; i++) {
        int leftChildIndex = 2 * i + 1;
        int rightChildIndex = 2 * i + 2;
        if(arr[i] < arr[leftChildIndex])  {
            return false;
        }
        
        if( arr[i] < arr[rightChildIndex] && rightChildIndex < n) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = { 42, 20, 18, 6, 14, 11, 9, 4 };
    int n = 8;
    bool z = checkMaxHeap(arr, n);
    if(z) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}