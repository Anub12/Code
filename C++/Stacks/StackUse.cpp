#include <iostream>
#include <stack>
#include "Stack.cpp"
#include "StackUsingArray.h"
using namespace std;

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;

    cout << s.empty() << endl;


    /*
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout << s.top() << " ";

    cout << s.pop() << " ";
    cout << s.pop() << " ";
    cout << s.pop() << " ";

    cout << s.getSize() << " ";

    cout << s.isEmpty() << " ";
    */

    return 0;
}