

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].push_back(val2);
	v[val2].push_back(val1);
}
void printGraph(vector<int> v[], int noOfVertices) {

	for (int i = 0; i < noOfVertices; ++i) {
		cout << "For vertex : " << i << " => ";
		for (auto it : v[i]) {
			cout << it << "->";
		}
		cout << endl;
	}
}

void BFS(vector<int> v[], int startVertex) {

	queue<int> q;
	int visitedArray[100] = {};
	q.push(startVertex);
	visitedArray[startVertex] = 1;

	int temp;
	while (q.empty() == false) {

		temp = q.front();
		cout << temp << " ";
		q.pop();

		for (auto it : v[temp]) {
			if (visitedArray[it] == 0) {
				q.push(it);
				visitedArray[it] = 1;
			}
		}
	}

}

void DFS(vector<int> v[], int startingVertex) {

	stack<int> s;
	int visitedArray[100] = {};

	s.push(startingVertex);
	visitedArray[startingVertex] = 1;
	cout << s.top() << " ";
	
	int temp, status;
	while (s.empty() == false) {
		temp = s.top();
		
		status = 0;
		for (auto it : v[temp]) {
			if (visitedArray[it] == 0) {
				s.push(it);
				visitedArray[it] = 1;
				cout << it << " ";
				status = 1;
				break;
			}
		}
		if (status == 0) {
			s.pop();
		}

	}

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

	BFS(v, 0);
	DFS(v, 0);

	printGraph(v, 6);

	return 0;
}
