

// This method is dfs not bfs.
// Although i haven't tried, but i think bfs(directed) will be same as undirected one.

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].emplace_back(val2);
}

void dfs(vector<int> v[], int startingVertex) {

	int visitedArray[100] = {};
	stack<int> s;
	s.push(startingVertex);
	cout << startingVertex << " ";
	visitedArray[startingVertex] = 1;

	int temp;
	while (s.empty() == false) {
		temp = s.top();
		s.pop();

		for(auto it : v[temp]) {
			if (visitedArray[it] == 0) {
				s.push(it);
				cout << it << " ";
				visitedArray[it] = 1;
			}
		}
	}

}


int main() {

	vector<int> v[100];
	int edges;
	cin >> edges;
	for (int i = 0; i < edges; ++i) {
		int val1, val2;
		cin >> val1 >> val2;
		addEdge(v, val1, val2);
	}

	dfs(v, 0);


	return 0;
}
