#include <bits/stdc++.h> 
using namespace std; 

class Graph 
{ 
    int V; 
    list<int> *adj;    
public: 
    Graph(int V); 
    void addEdge(int v, int w);  
    void BFS(int s);   
}; 

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v , int w)
{
	adj[v].push_back(w);
}

void Graph::BFS(int s)
{
	bool *visited = new bool[V];
	for(int i =0 ;i<V; i++)
	{
		visited[i] = false;
	}
	
	list <int> queue;
	visited[s] = true;
	queue.push_back(s);
	
	list<int>::iterator i;
	
	while(!queue.empty())
	{
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		
		for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
	}
}

int main ()
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
	int start; 
    cout << "Enter the starting Vertex for BFS-\n";
    cin >> start;
    cout << "Starting from vertex " << start << ", the BFS is as -\n";
    g.BFS(start);
	return 0;
}
