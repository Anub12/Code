#include <iostream>
#include <vector>
using namespace std;

bool getPath(int ** edges, int n, bool * visited, int sv, int ev, vector<int>& res) {
    if(sv == ev) {
        return true;
    }
    visited[sv] = true;
    bool ans = false;
    for(int i = 0; i < n; i++) {
        if(!visited[i] && edges[sv][i] == 1) {
            ans = getPath(edges, n, visited, i, ev, res);
        }
        if(ans == true) {
            res.push_back(sv);
            return true;
        }
    }
    return ans;
}

int main() {
    // this part is common for giving input
    int n;
    int e;
    cin >> n >> e;
    int ** edges = new int*[n];

    for(int i = 0; i < n; i++) {
        edges[i] = new int[n];
        for(int j = 0; j < n; j++) {
            edges[i][j] = 0;
        }
    }

    for(int i = 0; i < e; i++) {
        int f, s;
        cin >> f;
        cin >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    bool * visited = new bool[n];
    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }
    
    // this part is our main question

    vector<int> res;

    if(getPath(edges, n, visited, 1, 6, res)) {
        for(auto i: res) {
            cout << i << " ";
        }
    }
 

    // this part is freeing the memory
    delete [] visited;
    
    for(int i = 0; i < n; i++) {
        delete [] edges[i];
    }
    delete [] edges;


    return 0;
}