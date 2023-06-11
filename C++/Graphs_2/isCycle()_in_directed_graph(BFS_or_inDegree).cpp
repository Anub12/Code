
#include<iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].push_back(val2);
}



bool isCyclic(vector<int> v[], int noOfVertices) {

	vector<int> inDegree(noOfVertices, 0);
	for (int i = 0; i < noOfVertices; ++i) {
		for (auto it : v[i]) {
			inDegree[it]++;
		}
	}

	queue<int> q;
	for (int i = 0; i < noOfVertices; ++i) {
		if (inDegree[i] == 0)
			q.push(i);
	}

	int count = 0;
	while (q.empty() == false) {

		int temp = q.front();
		q.pop();

		for (auto it : v[temp]) {
			--inDegree[it];
			if (inDegree[it] == 0)
				q.push(it);
		}
		++count;
	}

	if (count == noOfVertices)
		return false;

	return true;


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

	cout << isCyclic(v, 4);

	return 0;
}

 