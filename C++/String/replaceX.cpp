#include <iostream>
using namespace std;

void replaceX(char str[], char c1, char c2) {
    if(str[0] == '\0') {
        return;
    }
    if(str[0] == c1) {
        str[0] = c2;
    }
    return replaceX(str+1, c1, c2);
}

int main() {
    char str[] = "abacd";
    char c1 = 'a';
    char c2 = 'x';

    replaceX(str, c1, c2);

    cout << str;

    return 0;
}