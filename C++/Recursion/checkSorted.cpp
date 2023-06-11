#include <iostream>
using namespace std;

void takeInput(int arr[]) {
    int a;
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool is_sorted(int arr[], int size) {
    if(size == 0 || size == 1) {
        return true;
    }

    return arr[size - 1] >= arr[size - 2] && is_sorted(arr, size - 1);
}

int main(){
    int arr[10];
    takeInput(arr);
    is_sorted(arr, 10);
    if(is_sorted(arr, 10)) {
        cout << "Array is sorted." << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}

// // checks if array is sorted


// #include <iostream>
// using namespace std;

// bool is_Sorted(int arr[], int size) {
//     if(size == 0 || size == 1) {
//         return true;
//     }
//     return arr[size-1] >= arr[size-2] && is_Sorted(arr, size-1);
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     if(is_Sorted) {
//         cout << "True" << endl;
//     }
//     else {
//         cout << "False" << endl;
//     }

//     return 0;
// }