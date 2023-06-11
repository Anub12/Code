#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> s) {
    stack<int> tempst;

    if(s.empty()) {
        while(!tempst.empty()) {
            s.push(tempst.top());
            tempst.pop();
        }
        return;
    }

    int item = s.top();
    s.pop();

    reverse(s);
    tempst.push(item);
}

void print(stack<int> s) {
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

int main() {
    int n;
    cout << "How many Number of elements you want to enter: ";
    cin >> n;

    cout << "Enter Elements: ";
    stack<int> s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

    reverse(s);
    cout << "After reversing: ";
    print(s);

    return 0;
}