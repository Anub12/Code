#include <iostream>
#include <unordered_map>
using namespace std;

int highestFrequency(int* input, int n) {
    int maxf = 1;
    int pos = 0;

    unordered_map<int,int> m;
    for(int i = n - 1; i >= 0; i--) {
        if(m.count(input[i]) == 0) {
            m[input[i]] == 0;
        }
        else {
            m[input[i]] += 1;
            if(maxf <= m[input[i]]){
                pos = i;
                maxf = m[input[i]];
            }
        }
    }
    return input[pos];
}

int main(){
    int arr[] = { 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int z = highestFrequency(arr, 11);
    cout << "The number that has been appeared most is: " << z << endl;


    return 0;
}