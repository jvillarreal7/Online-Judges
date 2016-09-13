//Based on this: http://www.geeksforgeeks.org/bridge-in-a-graph/

#include <iostream>
#include <list>
#define NIL -1
using namespace std;

int bridges = 0; //¯\_(ツ)_/¯

class Graph
{
	int V; 
	list<int> *adj; 
	void bridgeUtil(int v, bool visited[], int disc[], int low[],
					int parent[]);
public:
	Graph(int V);
	void addEdge(int v, int w); 
	void bridge(); 
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Graph::bridgeUtil(int u, bool visited[], int disc[], 
								int low[], int parent[])
{
	static int time = 0;

	visited[u] = true;

	disc[u] = low[u] = ++time;

	list<int>::iterator i;
	for (i = adj[u].begin(); i != adj[u].end(); ++i)
	{
		int v = *i;

		if (!visited[v])
		{
			parent[v] = u;
			bridgeUtil(v, visited, disc, low, parent);
			low[u] = min(low[u], low[v]);
			if (low[v] > disc[u])
				bridges++;
		}
		else if (v != parent[u])
			low[u] = min(low[u], disc[v]);
	}
}

void Graph::bridge()
{
	bool *visited = new bool[V];
	int *disc = new int[V];
	int *low = new int[V];
	int *parent = new int[V];

	for (int i = 0; i < V; i++)
	{
		parent[i] = NIL;
		visited[i] = false;
	}
	for (int i = 0; i < V; i++)
		if (visited[i] == false)
			bridgeUtil(i, visited, disc, low, parent);
}

int main()
{
	int c, b, x, y;
	while(cin>>c>>b)
	{
		Graph g1(c);
		for(int i = 0; i < b; i++)
		{
			cin>>x>>y;
			g1.addEdge(x-1, y-1);
		}
		g1.bridge();
		cout<<bridges<<endl;
		bridges = 0;
	}
	return 0;
}
