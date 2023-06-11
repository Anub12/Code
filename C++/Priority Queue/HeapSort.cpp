#include <iostream>
using namespace std;

void inplaceHeapSort(int input[], int n) {
    // Build the heap in the array
    for(int i = 0; i < n; i++) {
        int childIndex = i;
        while(childIndex > 0) {
            int parentIndex = (childIndex - 1)/ 2;
            if(input[childIndex] < input[parentIndex]) {
                int temp = input[childIndex];
                input[childIndex] = input[parentIndex];
                input[parentIndex] = temp;
            }
            else {
                break;
            }
            childIndex = parentIndex;
        } 
    }
    // Remove Elements
    int size = n;
    int temp = input[0];
    input[0] = input[size - 1];
    input[size - 1] = temp;
    size--;
    
    int parentIndex = 0;
    int leftChildIndex = 2 * parentIndex + 1;
    int rightChildIndex = 2 * parentIndex + 2;
    while(leftChildIndex < size) {
        int minIndex = parentIndex;
        if(input[minIndex] > input[leftChildIndex]){
            minIndex = leftChildIndex;
        }
        if(rightChildIndex < size && input[rightChildIndex] < input[minIndex]){
            minIndex = rightChildIndex;
        }
        if(minIndex == parentIndex) {
            break;
        }
        int temp = input[minIndex];
        input[minIndex] = input[parentIndex];
        input[parentIndex] = temp;

        parentIndex = minIndex;
        leftChildIndex = 2 * parentIndex + 1;
        rightChildIndex = 2 * parentIndex + 2;
    }
}

int main() {
    int arr[] = { 100, 20, 2, 5, 8 };
    int size = 5;
    inplaceHeapSort(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}