

// here we have used simle bfs, and this algo works same for directed tree also.

#include<iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void addEdge(vector<int> v[], int val1, int val2) {
	v[val1].push_back(val2);
	v[val2].push_back(val1);
}

void minDistance(vector<int> v[], int source, int target) {
	
	int visitedArray[100] = {};
	queue<int> q;
	q.push(source);
	visitedArray[source] = 1;

	int size , dis = 0;

	int temp, status = 0;
	while (q.empty() == false) {

		size = q.size();
		while (size-- > 0) {
			temp = q.front();
			q.pop();	
			if (temp == target) {
				status = 1;
				break;
			}
			for (auto it : v[temp]) {
				if (visitedArray[it] == 0) {
					q.push(it);
					visitedArray[it] = 1;
				}
			}
		}

		if (status == 1) {
			break;
		}
		++dis;

	}

	cout << "distance is : " << dis;
	
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


	minDistance(v, 0, 4);
	

	return 0;
}

