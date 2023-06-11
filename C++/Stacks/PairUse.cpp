#include <iostream>
#include "Pair.cpp"
using namespace std;

int main() {

    // nested Pair
    cout << "When a man learns to love, he must bear the risk of hatred...." << endl;
    Pair<Pair<int, int>, int> p2;
    p2.setY(10);
    
    Pair<int, int> p4;
    p4.setX(5);
    p4.setY(16);

    p2.setX(p4);

    cout <<  p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY();

    /*
    Pair<int, double> p1;
    p1.setX(100.32);
    p1.setY(100.34);

    cout << p1.getX() << " " << p1.getY(); 
    */

    /*
    Pair<int> p1;
    p1.setX(10);
    p1.setY(20);

    cout << p1.getX() << " " << p1.getY() << endl;

    Pair<double> p2;
    p2.setX(100.32);
    p2.setY(31.49);

    cout << p2.getX() << " " << p2.getY() << endl;
    */

    return 0;
}