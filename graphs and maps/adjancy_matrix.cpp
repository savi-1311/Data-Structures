#include <bits/stdc++.h> 
using namespace std; 
#define MAX 50
class node
{
	public:
    char data;
};
class arc
{
	public:
	float weight;
};
class graph 
{
	public:
    node nodes[MAX];
    arc arcs[MAX][MAX];
};

int main()
{
	graph g;
	int n;
	cout << "Enter the total no. of nodes -\n";
	cin >> n;
	for(int i=0; i<n;i++)
	{
		cout << "Enter the name(char) of the node -\n";
		cin >> g.nodes[i].data;
		int chk;
		cout << "Does it have a successor? (1 for YES, 0 for NO)\n";
		cin >> chk;
		if(chk == 1)
		{
			do
			{
				int j;
				cout << "Enter the index of sucessor (0 for 1st node n-1 for last node) and the weight\n";
				cin >> j;
				cin >> g.arcs[i][j].weight;
				cout << "Does it have another successor? (1 for YES, 0 for NO)\n";
				cin >> chk;
			}while(chk!=0);
		}
	}
	cout << "\n The Adjacant Matrix is - \n";
	for(int i=0; i<n;i++)
	{
		cout << "\n";
		cout << g.nodes[i].data << " ";
		for(int j=0;j<n;j++)
		cout << g.arcs[i][j].weight << " ";
	}
	return 0;
}
