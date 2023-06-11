#include <bits/stdc++.h>
using namespace std;

void DFS(unordered_map<int, vector<int>>& graph, int node, vector<bool>& visited) {
    if(visited[node])
        return;
    visited[node] = true;

    for(auto x: graph[node]) {
        if(visited[x] == false)
            DFS(graph, x, visited);
    }
}

int makeConnUtil(int connections[][2], int n, int m) {
    vector<bool> visited(n, false);
    unordered_map<int, vector<int>> graph;
    int edges = 0;
    for(int i = 0; i < m; i++) {
        graph[connections[i][0]].push_back(connections[i][1]);
        graph[connections[i][1]].push_back(connections[i][0]);
        edges += 1;
    }
    int components = 0;
    for(int i = 0; i < n; i++) {
        if(visited[i] == false) {
            components += 1;
            DFS(graph, i, visited);
        }
    }

    if(edges < n -1)
        return -1;
    
    int redundant = edges - ((n - 1) - (components - 1));
    if(redundant >= (components - 1))
        return components - 1;
    
    return -1;
}

void makeConnection(int connections[][2], int n, int m){
    int minOps = makeConnUtil(connections, m, n);
    cout << minOps;
}

int main(){
    int n = 4;
    int connections[][2] = {{0, 1}, {0, 2}, {1, 2}};
    int m = sizeof(connections)/sizeof(connections[0]);

    makeConnection(connections, n, m);

    return 0;
}

// make an image drawing of computers in your notes