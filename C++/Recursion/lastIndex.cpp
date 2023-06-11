#include <iostream>
using namespace std;

int lastIndex(int arr[], int size, int x, int currIndex) {
    if(currIndex == size) {
        return -1;
    }
    int index = lastIndex(arr, size, x, currIndex+1);
    if(index == -1 && arr[currIndex] == x) {
        return currIndex;
    }
    else {
        return index;
    }
}

int main() {
    int arr[] = {9, 8, 10, 8};
    int x = 8;
    int size = 4;
    cout << lastIndex(arr, size, x, 0);
    
    return 0;
}