#include <iostream>
using namespace std;

int power(int x, int n) {
    if(x == 0){
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    return x * power(x, n-1);
}

int main(){
    int x, n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    int output = power(x, n);
    cout << output << endl;

    return 0;
}