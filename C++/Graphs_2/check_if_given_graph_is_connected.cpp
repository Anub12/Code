

//  we just ran dfs and then check if all vertices in visitedArray are visited or not.

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	
	v[val1].emplace_back(val2);
	v[val2].emplace_back(val1);

}

void print(vector<int> v[], int noOfVertices) {

	for (int i = 0; i < noOfVertices;++i) {
		cout << i << " => ";
		for (auto it : v[i]) {
			cout << it << " ";
		}
		cout << endl;
	}

}


void check(vector<int> v[], int startVertex, int noOfVertices) {

	int visitedArray[100] = {};
	stack<int> s;
	s.push(startVertex);
	visitedArray[startVertex] = 1;
	cout << s.top() << " ";

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

	bool connected = true;
	for (int i = 0; i < noOfVertices; ++i) {
		if (visitedArray[i] == 0) {
			connected = false;
		}
	}

	cout << "\nConnected or not : " << connected;

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
	
	check(v, 0, 7);
	

	return 0;
}
