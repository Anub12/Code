

#include<iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].push_back(val2);
	v[val2].push_back(val1);
}

bool modifiedDFS(vector<int> v[],int startingVertex, int visitedArray[], int parent) {

	visitedArray[startingVertex] = 1;

	int temp = startingVertex;
	for (auto it : v[temp]) {
		if (visitedArray[it] == 0) {
			if (modifiedDFS(v, it, visitedArray, temp))
				return true;
		}
		else if (it != parent)
			return true;
	}
	return false;

}

bool isCyclic(vector<int> v[], int noOfVertices) {

	bool b = false;
	for (int i = 0; i < noOfVertices; ++i) {
		int visitedArray[100] = {};

		b = b || modifiedDFS(v, i, visitedArray, -1);

	}
	
	return b;

}


int main() {

	vector<int> v[100];

	int edges;
	cin >> edges;
	for (int i = 0; i < edges; ++i) {
		int a, b;
		cin >> a >> b;
		addEdge(v, a, b);
	}

	cout << isCyclic(v, 5);

	return 0;
}
