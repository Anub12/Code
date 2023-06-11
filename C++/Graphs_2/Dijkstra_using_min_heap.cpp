
// dijkstra's algo can be implemented using set, adjList, adjMatrix, priority_queue, pairs of vectors etc.


// Below is using priority_queue.
// I think below can be done only by using simple queue.




#include <iostream>
#include <climits> // for INT_MAX
#include <queue>

using namespace std;

typedef pair<int, int> iPair;


void addEdge(vector<pair<int,int>> v[], int val1, int val2, int wt) {
	v[val1].push_back(make_pair(val2, wt));
}


void shortestPath(vector<pair<int, int>> v[], int source, int noOfVertices) {

	priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

	vector<int> dis(noOfVertices, INT_MAX);

	pq.push(make_pair(0, source));
	dis[source] = 0;

	while (pq.empty() == false) {

		int temp = pq.top().second;
		pq.pop();

		for (auto it : v[temp]) {

			int t = it.first;
			int wt = it.second;

			if (dis[t] > dis[temp] + wt) {
				dis[t] = dis[temp] + wt;
				pq.push(make_pair(dis[t], t));
			}
		}

	}

	for (int i = 0; i < noOfVertices; ++i) {
		cout << i << " " << dis[i] << endl;
	}

}

int main() {

	
	vector<pair<int, int>> v[100];

	int edges;
	cin >> edges;

	for (int i = 0; i < edges; ++i) {
		int val1, val2, wt;
		cin >> val1 >> val2 >> wt;
		addEdge(v, val1, val2, wt);
	}
	

	shortestPath(v, 0, 5);

	return 0;
}


