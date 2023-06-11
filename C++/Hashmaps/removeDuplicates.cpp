#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int* a, int size) {
    vector<int> output;
    unordered_map<int, bool> seen;

    for(int i = 0; i < size; i++){
        if(seen.count(a[i]) > 0)
            continue;
        seen[a[i]] = true;
        output.push_back(a[i]);
    }
    return output;
}

int main(){
    // int a[] = { 1, 2, 3, 3, 2, 1, 4, 3, 6, 5, 5 };
    int a[] = { 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 6, 7, 7, 8, 8, 9, 9, 9, 10 };
    vector<int> output = removeDuplicates(a, 21);
    for(int i = 0; i < output.size(); i++) {
        cout << output[i] << endl;
    }

    return 0;
}