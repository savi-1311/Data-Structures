#include <bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
	void DFSUtil(int v, bool visited[]);
	public: 
    Graph(int V); 
    void addEdge(int v, int w);  
    void DFS(); 
};
Graph::Graph(int V)
{
	this->V = V; 
    adj = new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}
void Graph::DFSUtil(int v, bool visited[]) 
{ 
    visited[v] = true; 
    cout << v << " "; 
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        if(!visited[*i]) 
            DFSUtil(*i, visited); 
} 

void Graph::DFS()
{
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++)
    { 
        visited[i] = false;
	} 
  
    for (int i = 0; i < V; i++) 
        if (visited[i] == false) 
            DFSUtil(i, visited); 
}
int main()
{
int n;
	char ch = 'y';
	cout << "Enter the total number of Vertices -\n";
	cin >> n;
	Graph g(n);
	do
	{
		int pre,suc;
		cout << "Enter the indices of predecessor and the successor -\n";
		cin >> pre >> suc ;
		g.addEdge(pre, suc); 
		cout << "Do You want to continue (y/n)-\n";
		cin >> ch;
		
	}while(ch != 'n');
    cout << "The DFS is-\n";
    g.DFS();
	return 0;
}
