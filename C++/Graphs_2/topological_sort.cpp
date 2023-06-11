
// this can be done using recursion too, try that too.
// write a program to print all topological sorts.



#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].emplace_back(val2);
}

void topologicalSort(vector<int> v[], int noOfVertices) {

	vector<int> inDegree(noOfVertices, 0);

	for (int i = 0; i < noOfVertices; ++i) {
		for (auto it : v[i]) {
			++inDegree[it];
		}
	}

	queue<int> q;
	for (int i = 0; i < noOfVertices; ++i) {
		if (inDegree[i] == 0) {
			q.push(i);
		}
	}

	int temp;
	vector<int> ans;
	while (q.empty() == false) {
		temp = q.front();
		ans.push_back(temp);
		q.pop();

		for (auto it : v[temp]) {
			--inDegree[it];
			if (inDegree[it] == 0) {
				q.push(it);
			}
		}
	}

	for (auto it : ans) {
		cout << it << " ";
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

	topologicalSort(v, 10);

	return 0;
}
