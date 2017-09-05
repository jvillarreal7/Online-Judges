#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int getParent(int i) {
	if(parent[i] == i)
		return i;
	else
		return parent[i] = getParent(parent[i]);
}

bool sameSet(int i, int j) {
	return getParent(i) == getParent(j);
}

void joinSets(int i, int j) {
	parent[getParent(i)] = getParent(j);
}

void init(int n) {
	parent.assign(n, 0);
	for(int i = 0; i < n; i++)
	{
		parent[i] = i;
	}
}


int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	//cout<<">>> "<<t<<endl;
	while(t--) {
		int n, s_question = 0, u_question = 0;
		cin>>n;
		cin.ignore();
		//cout<<">>> "<<n<<endl;
		init(n);
		string line;
		while(getline(cin,line) && (line != "")) {
			char op;
			int a, b;
			stringstream ss;
			ss << line;
			ss >> op >> a >> b;
			a--;
			b--;
			//cout << ">>" << op << ' ' << a << ' ' << b << '\n';
			if(op == 'c') {
				if(!sameSet(a, b)) {
					joinSets(a, b);
				}
			}
			else {
				if(sameSet(a, b)) {
					s_question++;
				}
				else {
					u_question++;
				}
			}
		}
		if(t > 0)
			cout << s_question << ',' << u_question << "\n\n";
		else
			cout << s_question << ',' << u_question << "\n";
	}
	return 0;
}
