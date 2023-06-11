#include <iostream>
#include <climits>
using namespace std;

class Edge {
public:
    int src, des, weight;
};

class Graph{
public:
    int V, E;
    Edge* edge;

    Graph* createGraph(int V, int E) {
        Graph* graph = new Graph;
        graph->V = V;
        graph->E = E;
        graph->edge = new Edge[E];
        return graph;
    }
};

void BellmanFord(Graph* graph, int src) {
    int V = graph->V;
    int E = graph->E;
    int dist[V];
    for(int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    
    dist[src] = 0;

    for(int i = 1; i <= V - 1; i++) {
        for(int j = 0; j < E; j++) {
            int u = graph->edge[j].src;
            int v = graph->edge[j].des;
            int weight = graph->edge[j].weight;
            if(dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }

    for(int i = 0; i < E; i++) {
        int u = graph->edge[i].src;
        int v = graph->edge[i].des;
        int weight = graph->edge[i].weight;
        if(dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains negative weight cycle";
        }
    }

    cout << "Vertex : ";
    for (int i = 0; i < V; ++i)
        cout << i << " ";
    cout << "\nDistance From Source : ";
    for (int i = 0; i < V; ++i)
        cout << dist[i] << " ";

    return;
}

int main() {
    int V = 5;
    int E = 8;
    Graph* graph = graph->createGraph(V, E);
    graph->edge[0].src = 0;
    graph->edge[0].des = 1;
    graph->edge[0].weight = -1;
    graph->edge[1].src = 0;
    graph->edge[1].des = 2;
    graph->edge[1].weight = 4;
    graph->edge[2].src = 1;
    graph->edge[2].des = 2;
    graph->edge[2].weight = 3;
    graph->edge[3].src = 1;
    graph->edge[3].des = 3;
    graph->edge[3].weight = 2;
    graph->edge[4].src = 1;
    graph->edge[4].des = 4;
    graph->edge[4].weight = 2;
    graph->edge[5].src = 3;
    graph->edge[5].des = 2;
    graph->edge[5].weight = 5;
    graph->edge[6].src = 3;
    graph->edge[6].des = 1;
    graph->edge[6].weight = 1;
    graph->edge[7].src = 4;
    graph->edge[7].des = 3;
    graph->edge[7].weight = -3;
    
    BellmanFord(graph, 0);

    return 0;
}