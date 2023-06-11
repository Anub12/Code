#include <iostream>
using namespace std;

int checkPalindrome(string st, int first, int last) {
    if(first < last + 1) {
        first++;
        last--;
        return checkPalindrome(st, first, last);
    }

    if(first == last) {
        return 1;
    }
    
    if(st[first] != st[last]) {
        return 0;
    }
    return 1;
}

int main() {
    string st = "madam";
    int result;
    int length = st.size();
    if(length == 0) {
        result = 1;
    }
    else {
        result = checkPalindrome(st, 0, length-1);
    }

    if(result == 1) {
        cout << "Input string is palindrome.";
    }
    else {
        cout << "Input string is not palindrome.";
    }

    return 0;
}