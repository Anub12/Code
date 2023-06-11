#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> mpq; // max priority queue
    pq.push(16);
    pq.push(176);
    pq.push(20);
    pq.push(49);
    pq.push(23);
    pq.push(8);

    cout << "Size: " << pq.size() << endl; 
    cout << "Top: " << pq.top() << endl;

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}

// hw do k sorted array code on your own