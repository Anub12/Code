#include <iostream>
#include "minPriorityQueue.h"
#include "maxPriorityQueue.h"
using namespace std;

int main() {
    minPriorityQueue p;
    MaxPriorityQueue mp;
    mp.insert(100);
    mp.insert(10);
    mp.insert(5);
    mp.insert(11);
    mp.insert(13);
    mp.insert(17);
    mp.insert(21);
    mp.insert(67);
    mp.insert(44);

    cout << "The size of max priority queue is: " << mp.getSize() << endl;
    cout << "The max element is: " << mp.getMax() << endl;
    while(!mp.isEmpty()){
        cout << mp.removeMax() << " ";
    }
    cout << endl;

    p.insert(100);
    p.insert(10);
    p.insert(5);
    p.insert(11);
    p.insert(13);
    p.insert(17);
    p.insert(21);
    p.insert(67);

    cout << "The size of Priority queue is: " << p.getSize() << endl;
    cout << "The min element is: " << p.getMin() << endl;

    while(!p.isEmpty()) {
        cout << p.removeMin() << " ";
    }
    cout << endl;

    return 0;
}

// This is also known as heap sort