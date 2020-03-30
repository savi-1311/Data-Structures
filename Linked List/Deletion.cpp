#include <bits/stdc++.h> 
using namespace std; 

class Node
{
	public:
		int data;
		Node* next;
};
void deletepos(Node** head_ref)
{
	Node* temp = new Node();
	Node* n= *head_ref;
	int pos,i;
	cout << "\nEnter the position you wish to delete-\n";
	cin >> pos;
	for(i=1;i<pos-1;i++)
	{
		n = n->next;
	}
	temp = n->next;
	n->next = temp->next;
	cout << "\n! Deleted Node at Specified Position !\n";
}
void deletefront(Node** head_ref)
{
	Node* temp = new Node();
	temp = *head_ref;
	*head_ref = temp->next;
	cout << "\n! Deleted First Node !\n";
}
void deletelast(Node** head_ref)
{
	Node* n= *head_ref;
	while(n->next->next != NULL)
	{
		n = n->next;
	}
	n->next = NULL;
	cout << "\n! Deleted Last Node !\n";
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
	deletefront(&head);
	printList(head);
	deletelast(&head);
	printList(head);
	deletepos(&head);
	printList(head);
	return 0;
}
