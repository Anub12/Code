#include <iostream>
#include <unordered_map>
using namespace std;

void freq(int arr[], int n) {
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++) {

        map[arr[i]]++;
        // by derault values will be considered as 0 and hence we
        // will be ablet to perform increment opeartion.
    }

    for(auto it: map){
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5, 5};
    int n = 17;

    freq(arr, n);

    return 0;
}

// Must do GCD