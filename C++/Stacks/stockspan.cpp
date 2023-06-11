#include <iostream>
#include "Stack.h"
using namespace std;

void calcualteSpan(int price[], int n, int S[]) {
    Stack<int> St;
    St.push(0);

    S[0] = 1;

    for(int i = 1; i < n; i++) {
        while (!St.isEmpty() && price[St.top()] <= price[i]) 
            St.pop();
        S[i] = (St.isEmpty()) ? (i + 1) : (i - St.top());
        St.push(i);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } // This is something that I don't know, how can I do it? There can be many options 
    // to do this question, but I can't figure out any of'em.
}

int main() {
    int price[] = { 10, 4, 5, 90, 120, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    int S[n];

    calcualteSpan(price, n, S);
    printArray(S, n);


    return 0;
}