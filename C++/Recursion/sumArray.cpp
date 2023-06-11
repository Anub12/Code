#include <iostream>
using namespace std;

// int sumArray(int arr[], int size) {
//     if(size <= 0) {
//         return 0;
//     }
//     return (sumArray(arr, size - 1) + arr[size - 1]);
// }

int sumArray(int arr[], int size) {
    
}

int main(){
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << sumArray(arr, size);

    return 0;
}