#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);
    return smallOutput1 + smallOutput2;
}

int main(){
    cout << "main function" << endl;
    cout << fib(3) << endl;
    cout << fib(4) << endl;
    cout << fib(5) << endl;
    cout << fib(6) << endl;

    return 0;
}