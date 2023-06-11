

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].push_back(val2);
	v[val2].push_back(val1);
}


void dfs(vector<int> v[], int startingVertex, int visitedArray[]) {

	stack<int> s;
	s.push(startingVertex);
	cout << s.top() << " ";
	visitedArray[startingVertex] = 1;

	int temp, status;
	while (s.empty() == false) {
		temp = s.top();
		status = 0;
		for (auto it : v[temp]) {
			if (visitedArray[it] == 0) {
				s.push(it);
				cout << it << " ";
				visitedArray[it] = 1;
				status = 1;
				break;
			}
		}
		if (status == 0) {
			s.pop();
		}
	}

}


int connectedComponents(vector<int> v[], int noOfVertices) {

	int visitedArray[100] = {};
	int count = 0;

	for (int i = 0; i < noOfVertices; ++i) {
		if (visitedArray[i] == 0) {
			dfs(v, i, visitedArray);
			++count;
		}
	}
	return count;

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

	// int visitedArray[100] = {};
	// dfs(v, 0, visitedArray);

	cout << connectedComponents(v, 7);




	return 0;
}

