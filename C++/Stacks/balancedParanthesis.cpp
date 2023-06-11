#include <iostream>
#include "Stack.h"
using namespace std;

bool areBracketsBalanced(string expr) {
    Stack<char> temp;
    for(int i = 0; i < expr.length(); i++) {
        if(temp.isEmpty()){
            temp.push(expr[i]);
        }
        else if((temp.top() == '(' && expr[i] == ')')
            || (temp.top() == '{' && expr[i] == '}')
            || (temp.top() == '[' && expr[i] == ']')) {
            temp.pop();
        }
        else {
            temp.pop();
        }
    }
    if(temp.isEmpty()) {
        return true;
    }
    return false;
}

int main(){
    string str;
    cin >> str;

    if(areBracketsBalanced(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}