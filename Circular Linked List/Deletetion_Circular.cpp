#include <bits/stdc++.h> 
using namespace std; 

class Node
{
	public:
		int data;
		Node* next;
};
Node* deletepos (Node* last)
{
	int pos;
	Node* n = last;
	Node* temp = new Node();
	cout << "\nEnter the position at which data is to be deleted -\n";
	cin >> pos ;
	for(int i=1;i<pos;i++)
	{
	   n = n->next;	
	}
	temp = n->next->next;
	n->next = temp;
	cout << "! Data Deleted at the specified position !\n";
	return last;
}
Node* deletefront (Node* last)
{
	Node* temp = new Node();
	temp = last->next->next;
	last->next = temp;
	cout << "! Data Deleted from the beginnig !\n";
	return last;
}
Node* deletelast (Node* last)
{
	Node* temp = new Node();
	Node* n = last;
	do{
		n = n->next;
	}while(n->next != last);
	temp = n->next->next;
	n->next = temp;
	last = n;
	cout << "! Data Deleted from the end !\n";
	return last;
}
void printList (Node* last)
{
	Node* n = last;
	cout << "\nThe Linked List Values are-\n";
	do
	{
		n = n->next;
	    cout<< n->data << "\n";
	}while(n!=last);
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
		List[i]->next=List[0];
		else
		List[i]->next = List[i+1];
	}
	//entering the values
	Node* last = List[k-1];
	printList(last);
	last = deletefront(last);
	printList(last);
	last = deletelast(last);
	printList(last);
	last = deletepos(last);
	printList(last);
	return 0;
}
