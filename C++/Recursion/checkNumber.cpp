#include <iostream>
using namespace std;

bool checkNumber(int arr[], int size, int x) {
    if(size <= 0 ) {
        return false;
    }
    if (arr[size - 1] == x) {
            return true;
    }
    checkNumber(arr, size - 1, x);
}

int main(){
    int arr[] = { 9, 8, 10 };
    int size = sizeof(arr)/sizeof(arr[0]);
    if(checkNumber(arr, size, 8)) {
        cout << "Number is present";
    }
    else {
        cout << "Number is not present";
    }

    return 0;
}

// I don't know why this warning, but this function works fine