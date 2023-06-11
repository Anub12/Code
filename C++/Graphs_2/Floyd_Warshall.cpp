#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e9;

void floydWarshall(vector<vector<int>> graph) {
    int n = graph.size();
    vector<vector<int>> dist = graph;
    for(int k = 0; k < n; ++k) {
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if(dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    vector<vector<int>> graph = { {0, 5, INF, 10},
                                  {INF, 0, 3, INF},
                                  {INF, INF, 0, 1},
                                  {INF, INF, INF, 0}
                                };
    floydWarshall(graph);


    return 0;
}

// floyd warshall 