#include <iostream>
#include <climits>
using namespace std;

class Stack {
    int *array;
    int capacity;
    int i;

public:
    Stack(){
        array = new int[4];
        capacity = 4;
        i = 0;
    }

    bool isEmpty() {
        return i == 0;
    }

    void push(int z) {
        if(i == capacity) {
            int *newArray = new int[2 * capacity];
            for(int i = 0; i < capacity; i++) {
                newArray[i] = array[i];
            }
            capacity *= 2;
            delete[] array;
            array = newArray;
        }
        array[i] = z;
        i++;
    }

    int pop(){
        if(isEmpty()) {
            cout << "Stack is Empty: " << endl;
            return INT_MIN;
        }
    }

    int size(){
        return i;
    }

    int top(){
        return array[i - 1];
    }
};