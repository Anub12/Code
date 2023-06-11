#include <iostream>
#include <vector>
#include "Stack.h"
#include "pair.h"
using namespace std;

void printNSE(int arr[], int n) {
    Stack<pair<int, int>> st;
    vector<int> ans (n);

    for(int i = 0; i < n; i++) {
        int next = arr[i];

        if(st.isEmpty()){
            st.push({ next, i });
            continue;
        }

        while(!st.isEmpty() && st.top().first > next){
            
        }
    }

}