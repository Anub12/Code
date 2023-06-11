#include <iostream>
using namespace std;

void printNum(int n) {
    if (n == 0) {
        return;
    }
    printNum(n - 1);
    cout << n << " ";
}

int main(){
    printNum(5);
    cout << endl;
    printNum(10);
    cout << endl;
    printNum(15);
    cout << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// void printNum(int n) {
//     cout << n << " ";
//     if(n == 1) {
//         return;
//     }
//     printNum(n-1);
// }

// int main() {
//     int n;
//     cout << "Enter value of n: ";
//     cin >> n; 
//     printNum(n);


//     return 0;
// }