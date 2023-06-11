#include <iostream>
using namespace std;

bool hasPath(int ** edges, int n, bool * visited, int sv, int ev) {
    if(edges[sv][ev] == 1)
        return true;
    visited[sv] = true;
    bool res = false;
    for(int i = 0; i < n; i++) {
        if(edges[sv][i] == 1 && !visited[i]) {
            res = hasPath(edges, n, visited, i, ev);
        }
        if(res == true)
            return true;
    }
    return res;
}

int main() {
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
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    bool * visited = new bool[n];
    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }

    // you can also use cin here for two variables which will
    // be at the place of 0 and 4

    bool z = hasPath(edges, n, visited, 0, 4);
    if(z){
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    delete [] visited;

    for(int i = 0; i < n; i++) {
        delete [] edges[i];
    }
    delete [] edges;

    return 0;
}