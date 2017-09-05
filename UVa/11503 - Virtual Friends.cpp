#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> friends;


int findSet(int i) {
	return (parent[i] == i) ? i : (parent[i] = findSet(parent[i]));
}

bool sameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
	friends[findSet(i)] = friends[findSet(i)] + friends[findSet(j)];
	friends[findSet(j)] = friends[findSet(i)];
	parent[findSet(j)] = findSet(i);
}

void init() {
	parent.assign(200010, 0);
	friends.assign(200010, 1);
	for(int i = 0; i < 200010; i++) {
		parent[i] = i;
	}
}


int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--) {
		int n, c = 0, a, b;
		cin>>n;
		cin.ignore();
		init();
		map<string, int> names;
		while(n--) {
			string line, f1, f2;
			getline(cin,line);
			stringstream ss;
			ss << line;
			ss >> f1 >> f2;
			if(names.find(f1) == names.end()) {
				names[f1] = c++;
			}
			a = names[f1];
			if(names.find(f2) == names.end()) {
				names[f2] = c++;
			}
			b = names[f2];
			if(sameSet(a, b)) {
				cout << friends[parent[a]] << '\n';
			}
			else {
				unionSet(a, b);
				cout << friends[parent[a]] << '\n';
			}
		}
	}
	return 0;
}
