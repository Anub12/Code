
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void fillArray(int arr[], int size, int val) {

	for (int i = 0; i < size; ++i) {
		arr[i] = val;
	}

}

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].emplace_back(val2);
}

void print(vector<int> v[], int noOfVertices) {

	for (int i = 0; i < noOfVertices; ++i) {
		cout << i << " => ";
		for (auto it : v[i]) {
			cout << it << " ";
		}
		cout << endl;
	}

}

void dfs(vector<int> v[], int startingVertex, int visitedArray[]) {

	stack<int> s;
	s.push(startingVertex);
	cout << startingVertex << " ";
	visitedArray[startingVertex] = 1;

	int temp;
	while (s.empty() == false) {
		temp = s.top();
		s.pop();

		for (auto it : v[temp]) {
			if (visitedArray[it] == 0) {
				s.push(it);
				cout << it << " ";
				visitedArray[it] = 1;
			}
		}
	}

}



void check(vector<int> v[], int noOfVertices) {
	
	int visitedArray[100];
	int status = true;
	bool stronglyConnected = true;
	for (int i = 0; i < noOfVertices;++i) {

		fillArray(visitedArray, noOfVertices, 0);
		dfs(v, i, visitedArray);
		for (int i = 0; i < noOfVertices; ++i) {
			if (visitedArray[i] == 0)
				status = false;
		}
		if (status == false) {
			stronglyConnected = false;
			break;
		}

	}
	cout<<endl<<stronglyConnected;

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

	check(v, 4); 


	return 0;
}
