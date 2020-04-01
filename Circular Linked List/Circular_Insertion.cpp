#include <bits/stdc++.h> 
using namespace std; 

class Node
{
	public:
		int data;
		Node* next;
};
Node* addpos (Node* last)
{
	int value,pos;
	Node* n = last;
	Node* temp = new Node();
	Node* newnodep = new Node();
	cout << "\nEnter the position and data to be inserted -\n";
	cin >> pos >>value;
	newnodep->data = value;
	for(int i=0;i<pos;i++)
	{
	   n = n->next;	
	}
	temp = n->next;
	newnodep->next = temp;
	n->next = newnodep;
	cout << "! Data Inserted at the specified position !\n";
	return last;
}
Node* addfront (Node* last)
{
	int value;
	Node* newnodef = new Node();
	cout << "\nEnter the data to be inserted at the beginning-\n";
	cin >> value;
	newnodef->data = value;
	newnodef->next = last->next;
	last->next = newnodef;
	cout << "! Data Inserted in the beginnig !\n";
	return last;
}
Node* addlast (Node* last)
{
	Node* temp;
	int value;
	Node* newnodel = new Node();
	cout << "\nEnter the data to be inserted at the end-\n";
	cin >> value;
	newnodel->data = value;
	temp = last->next;
	last->next = newnodel;
	newnodel->next = temp;
	last = newnodel;
	cout << "! Data Inserted at the end !\n";
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
	last = addfront(last);
	printList(last);
	last = addlast(last);
	printList(last);
	last = addpos(last);
	printList(last);
	return 0;
}
