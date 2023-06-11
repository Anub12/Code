
// mathematically, this algo seems easy but programatically its difficult.



#include <iostream>
#include <climits>
#include <vector>
#include <queue>

using namespace std;
typedef pair<int, int> pi;


void addEdge(vector<pair<int, int>> v[], int val1, int val2, int wt) {
	v[val1].push_back({ val2, wt });
	v[val2].push_back({ val1, wt });
}


void minSpanningTree(vector<pair<int, int>> v[], int startingVertex, int noOfVertices) {

	priority_queue<pi, vector<pi>, greater<pi>> pq;

	vector<int> key(noOfVertices, INT_MAX);

	vector<int> MST(noOfVertices, -1);
	vector<int> inMST(noOfVertices, false);

	pq.push(make_pair(0, startingVertex));
	key[startingVertex] = 0;

	while (pq.empty() == false) {

		int temp = pq.top().second;
		pq.pop();

		inMST[temp] = true;

		for (auto it : v[temp]) {

			int t = it.first;
			int wt = it.second;

			if (inMST[t] == false && key[t] > wt) {
				key[t] = wt;
				pq.push(make_pair(key[t], t));
				MST[t] = temp;
			}
		}
	}

	for (int i = 1; i < noOfVertices; ++i) {
		cout << MST[i] << " " << i << endl;
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

	minSpanningTree(v, 0, 4);

}

