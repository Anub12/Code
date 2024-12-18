#include <iostream>
using namespace std;

template <typename T>
class QueueUsingArray {
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(){
        data = new T[s]; // do check this line, because it throws an error every time
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }

    int getSize() {
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    // insert element
    void enqueue(T element) {
        if(size == capacity) {
            cout << "Queue Full !" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if(firstIndex == -1) {
            firstIndex = 0;
        }
        size++;
    }

    T front(){
        if(isEmpty()) {
            cout << "Queue is empty ! " << endl;
            return 0;
        }
        return data[firstIndex];
    }

    T dequeue(){
        if(isEmpty()){
            cout << "Queue is empty ! " << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if(size == 0) {
            firstIndex = -1;
            nextIndex = 0;
        } // this will reset firstIndex and nextIndex back to normal
        return ans;
    }
};