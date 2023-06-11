#include <iostream>
#include <vector>
using namespace std;

class minPriorityQueue {
    vector<int> pq;
public:
    minPriorityQueue() {
        // this constructor is empty
    }

    bool isEmpty() {
        return pq.size() == 0;
    }
    // Return the size of priority queue
    int getSize() {
        return pq.size();
    }

    int getMin() {
        if(isEmpty()) {
            return 0;
        }
        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1)/2;

            if(pq[childIndex] < pq[parentIndex]) {
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

    int removeMin() {
        if(isEmpty()) {
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        // down heapify
        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while(leftChildIndex < pq.size()) {
            int minIndex = parentIndex;
            if(pq[minIndex] > pq[leftChildIndex]){
                minIndex = leftChildIndex;
            }
            if(rightChildIndex < pq.size() && pq[rightChildIndex] < pq[minIndex]) {
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


// This is for min priority queue.