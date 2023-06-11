#include <iostream>
using namespace std;

int Count(int n) {
    if(n/10 == 0) {
        return 1;
    }
    return 1 + Count(n / 10);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int z = Count(n);
    cout << z;

    return 0;
}