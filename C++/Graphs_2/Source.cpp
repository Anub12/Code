// IMPLEMENTING DISJOINT SET USING ARRAYS.

#include <iostream>
using namespace std;

/*

class disjointSet {

public:
	int rank[100], parent[100], n;

	disjointSet(int num) {
		n = num;
		makeSet();
	}

	void makeSet() {
		for (int i = 0; i < n; i++) {
			parent[i] = i;
			rank[i] = 0;
		}
	}
	int find(int x){
		if (parent[x] != x) {
			parent[x] = find(parent[x]);
		}
		return parent[x];
	}

	void Union(int x, int y) {

		int xrep = find(x);
		int yrep = find(y);
		if (xrep == yrep)
			return;

		if (rank[xrep] < rank[yrep]) {
			parent[xrep] = yrep;
			rank[yrep]++;
			if (rank[xrep] > 0) {
				for (int i = 0; i < n; ++i) {
					if (parent[i] == xrep) {
						parent[i] = yrep;
						rank[yrep]++;
					}
				}
			}
			
		}

		else if (rank[xrep] > rank[yrep]) {
			parent[yrep] = xrep;
			rank[xrep]++;
			if (rank[yrep] > 0) {
				for (int i = 0; i < n; ++i) {
					if (parent[i] == yrep) {
						parent[i] = xrep;
						rank[xrep]++;
					}
				}
			}
			
		}

		else {

			if (rank[xrep] == 0) {
				parent[yrep] = xrep;
				rank[xrep] += 1;
			}
			else {
				for (int i = 0; i < n; ++i) {
					if (parent[i] == yrep) {
						parent[i] = xrep;
					}
				}
				rank[xrep] += rank[yrep] + 1;
			}

		}

		

	}

	void printRelations() {
		cout << "Final sets are : ";
		for (int i = 0; i < n; i++) {
			cout << parent[i] << " ";
		}
		cout << endl;
	}


};

*/

/*

class DisjSet {
	int* rank, * parent, n;
public:
	// Constructor to create and 
	// initialize sets of n items 
	DisjSet(int n)
	{
		rank = new int[n];
		parent = new int[n];
		this->n = n;
		makeSet();
	}

	// Creates n single item sets 
	void makeSet()
	{
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}

	int find(int x) { 
		if (parent[x] != x) {
			parent[x] = find(parent[x]);
		}
		return parent[x];
	}

 
	void Union(int x, int y) {

		int xset = find(x);
		int yset = find(y);

		if (xset == yset)
			return;

		if (rank[xset] < rank[yset]) {
			parent[xset] = yset;
		}
		else if (rank[xset] > rank[yset]) {
			parent[yset] = xset;
		}

		else {
			parent[yset] = xset;
			rank[xset] = rank[xset] + 1;
		}
	}

};


int main() {
*/

/*
	int n;
	cin >> n;
	disjointSet t(n);

	int noOfRelations;
	cin >> noOfRelations;
	for (int i = 0; i < noOfRelations; ++i) {
		int v1, v2;
		cin >> v1 >> v2;
		t.Union(v1, v2);
 	}
	
	
	t.printRelations();
*/

/*
	DisjSet obj(6);
	obj.Union(0, 1);
	obj.Union(3, 4);
	obj.Union(4, 5);
	obj.Union(1, 5);


	if (obj.find(4) == obj.find(0))
		cout << "Yes\n";
	else
		cout << "No\n";
	if (obj.find(1) == obj.find(0))
		cout << "Yes\n";
	else
		cout << "No\n";


	return 0;
}

*/