#include <iostream>
#include <vector>
using namespace std;

class MaxPriorityQueue {
    vector<int> pq;
public:
    MaxPriorityQueue() {
        // default constructor
    }

    bool isEmpty(){
        return pq.size() == 0;
    }

    int getSize() {
        return pq.size();
    }

    int getMax(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;
        while(childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;
            
            if(pq[childIndex] > pq[parentIndex]){ // this is the only change from min priority queue
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else {
                break;
            }
            childIndex = parentIndex;
        }
    }

    int removeMax() {
        if(isEmpty()) {
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() -1];
        pq.pop_back();
        // up heapify

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while(leftChildIndex < pq.size()) {
            int minIndex = parentIndex;
            if(pq[minIndex] < pq[leftChildIndex]){ // change > to <
                minIndex = leftChildIndex;
            }
            if(rightChildIndex < pq.size() && pq[rightChildIndex] > pq[minIndex]) { // change to <
                minIndex = rightChildIndex;
            }
            if(minIndex == parentIndex) {
                break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
};

/*
Priority Queue has two properties in general.
    1. It has to be a complete binary tree.
    2. They must follow the heap order property, either min heap or max heap.    
*/ 