#include <bits/stdc++.h>
using namespace std;

int splitString(string st, int size) {
    string st2;
    int count = 0;
    while(size != 0 && size < st.size()) {
        int i = 0, j = i + 1;
        if(st[i] == st[j]){
            st2[i] = st[i];
            count++;
        }
        else if(st[i] != st[j]){
            count++;
        }
    }
    return count;
}

int main() {
    int tc;
    cin >> tc;
    string st;
    while(tc-- && tc > 0){
        int size;
        cin >> size;
        for(int i = 0; i < size; i++) {
            cin >> st[i];
        }
        cout << splitString(st, size) << endl;
    }

    return 0;
}

// data mining watch 4 lectures videos by next class