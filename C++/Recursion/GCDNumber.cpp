#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a = 15;
    int b = 10;
    int z = gcd(a, b);
    cout << "The output is: " << z << endl;

    return 0;
}