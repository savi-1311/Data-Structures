#include <bits/stdc++.h> 
using namespace std; 

class tree
{
	public:
		int data;
		tree* left;
		tree* right;
};

tree* makeTree(int x)
{
tree* p = new tree();
p -> data = x;
p -> left = NULL;
p -> right = NULL;
return(p);
}
void setleft(tree* p,int x)
{
	int y =x;
	if(p==NULL)
	cout << "Invalid Insertion1\n";
	else if(p->left != NULL)
	{
	cout << "Invalid Insertion2\n";
    }
	else
	p->left = makeTree(y);
}
void setright(tree* p,int x)
{
	int y =x;
	if(p==NULL)
	cout << "Invalid Insertion11\n";
	else if(p->right != NULL)
	cout << "Invalid Insertion22\n";
	else
	p->right = makeTree(y);
}
void preOrder(tree* p)
{
	if(p!=NULL)
	{
		cout << p->data << "\n";
		preOrder(p->left);
		preOrder(p->right);
	}
}
void inOrder(tree* p)
{
	if(p!=NULL)
	{
		inOrder(p->left);
		cout << p->data << "\n";
		inOrder(p->right);
	}
}
void postOrder(tree* p)
{
	if(p!=NULL)
	{
		postOrder(p->left);
		postOrder(p->right);
		cout << p->data << "\n";
	}
}
int main()
{
	tree* node = makeTree(10);
	setleft(node,20);
	setright(node,30);
	setleft(node->left,40);
	setright(node->right,50);
	cout << "preOrder-\n";
	preOrder(node);
	cout << "inOrder-\n";
	inOrder(node);
	cout << "postOrder-\n";
	postOrder(node);
	return 0;
}
