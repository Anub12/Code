

// isCyclic() in directed graph using DFS.

#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].emplace_back(val2);
}

bool modifiedDFS(vector<int> v[], int startingVertex, int visitedArray[], int recStack[]) {

	if (visitedArray[startingVertex] == 0) {

		visitedArray[startingVertex] = 1;
		recStack[startingVertex] = 1;

		int temp = startingVertex;
		for (auto it : v[temp]) {

			if (visitedArray[it] == 0) {
				if (modifiedDFS(v, it, visitedArray, recStack))
					return true;
			}
			else if (recStack[it] == 1)
				return true;
		}
	}
	recStack[startingVertex] = 0;
	return false;

}

bool isCyclic(vector<int> v[], int noOfVertices) {

	bool b = false;
	for (int i = 0; i < noOfVertices; ++i) {
		int visitedArray[100] = {};
		int recStack[100] = {};
		b = b || modifiedDFS(v, i, visitedArray, recStack);

	}
	return b;

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

	cout << isCyclic(v, 4);

	return 0;
}
