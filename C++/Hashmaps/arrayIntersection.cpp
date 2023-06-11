#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> arrayIntersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    unordered_map<int, int> map;
    for(auto i: nums1) {
        if(map.find(i) == map.end()) {
            map[i] = 1;
        }
        else {
            map[i]++;
        }
    }
    for(auto n: nums2) {
        if(map.find(n) == map.end()) {
            if(map[n] > 0) {
                v.push_back(n);
                map[n]--;
            }
        }
    }
    return v;
}

int main(){
    vector<int> arr1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> output;
    output = arrayIntersection(arr1, arr2);
    for(int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }


    return 0;
}

// I don't know why it's not working but the soulution will be going to be this way....