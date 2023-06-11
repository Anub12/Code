#include <iostream>
#include "Stack.h"
using namespace std;

typedef long long ll;

int main(){
    ll t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        string str;
        cout << "Enter String: ";
        cin >> str;
        Stack<char> st;

        for(int i = 0; i < str.length(); i++) {
            if(str[i] != ')')
                st.push(str[i]);
            else {
                bool flag = true;
                char x = st.top();
                while(x != '(') {
                    if (x == '+' || x == '-' || x == '*' || x == '^' || x == '/')
                        flag = false;
                    x = st.top();
                    st.pop();
                }
                if(flag == true) {
                    cout << "YES" << "\n";
                    goto end;
                }
            }
        }
        cout << "NO" << "\n";
        end:;
    }
    return 0;
}

// This question is showing error I don't know why?