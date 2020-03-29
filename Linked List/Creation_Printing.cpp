#include <bits/stdc++.h> 
using namespace std; 

class Node
{
	public:
		int data;
		Node* next;
};
void printList (Node* n)
{
	cout << "\nThe Linked List Values are-\n";
	while(n!= NULL)
	{
		cout<< n->data << "\n";
		n = n->next;
	}
}

int main()
{
	int i,k;
	cout << "Enter The no. of Nodes\n";
	cin >> k;
	Node* List[k] = {NULL};
	//allocated statically
		for(i=0;i<k;i++)
	{
		List[i] = new Node();
	}
	//allocated Dynamically
	for(i=0;i<k;i++)
	{
		cout << i+1 << ". Enter The data in the node - \n";
		cin >> List[i]->data;
		if(i==k-1)
		List[i]->next=NULL;
		else
		List[i]->next = List[i+1];
	}
	//entering the values
	Node* head = List[0];
	printList(head);
	
	return 0;
}
