#include <bits/stdc++.h> 
using namespace std; 

class Node
{
	public:
		int data;
		Node* next;
};
void addpos(Node** head_ref)
{
	Node* n= *head_ref;
	int value,pos,i;
	Node* new_nodep = new Node();
	cout << "\nEnter the position after which data is to be inserted and the Data Data-\n";
	cin >> pos >> value;
	for(i=1;i<pos;i++)
	{
		n = n->next;
	}
	new_nodep->data= value;
	new_nodep->next= n->next;
	n->next= new_nodep;
}
void addfront(Node** head_ref)
{
	int value;
	Node* new_node = new Node();
	cout << "\nEnter the Data to be inserted at the begining-\n";
	cin >> value;
	new_node->data= value;
	new_node->next= *head_ref;
	*head_ref= new_node;
}
void addlast(Node** head_ref)
{
	Node* n= *head_ref;
	int value;
	Node* new_nodel = new Node();
	cout << "\nEnter the Data to be inserted at the end-\n";
	cin >> value;
	while(n->next != NULL)
	{
		n = n->next;
	}
	new_nodel->data= value;
	new_nodel->next= NULL;
	n->next= new_nodel;
}
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
	addfront(&head);
	printList(head);
	addlast(&head);
	printList(head);
	addpos(&head);
	printList(head);
	return 0;
}
