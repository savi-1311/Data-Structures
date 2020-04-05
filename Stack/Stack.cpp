#include <bits/stdc++.h> 
using namespace std;

class Stack{
	public:
	int data;
    Stack* next;	
};
 Stack* front = NULL;
 
 void pop()
 {
 	
 	if (front == NULL) {
    cout<<"Underflow\n";
    return;
    }
    Stack* temp = new Stack();
 	cout << "The deleted element is- " << front->data << "\n";
 	temp = front->next;
 	free(front);
 	front = temp;
 }
 
 push()
 {
 	int value;
 	cout << "Enter the value to be inserted-\n";
 	cin >> value;
 	Stack* temp = new Stack();
 	if(front == NULL)
 	{
 	   temp->data= value;
	   temp->next = NULL;
	   front = temp;	
	}
	else
	{
		temp->data = value;
		temp->next = front;
		front = temp;
	}
 }
 display()
 {
 	Stack* temp = new Stack();
 	if(temp == NULL)
 	{
 		cout << "Stack is Empty\n";
	 }
	 else
	 {
	 	temp = front;
	 	while(temp != NULL)
	 	{
	 		cout << temp->data <<" ";
	 		temp = temp->next;
		}
		cout << "\n";
	 }
 }
 
 
 int main()
 {
 	int ch;
 	cout << "1. Add An Element to the Stack\n2. Delete an element from the Stack\n3. Display the Stack\n4. Exit\n";
 	do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: push();
         break;
      case 2: pop();
         break;
      case 3: display();
         break;
      case 4: cout<<"Exit\n";
         break;
      default: cout<<"Invalid choice\n";
   }
} while(ch!=4);
   return 0;
 }
