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
int height(tree* p)
{
	if (p == NULL)
	return 0;
	
	int lh = height(p->left);
	int rh = height(p->right);
	int ans = (lh>rh)?lh:rh;
	return 1+ans;
}
bool isBalanced(tree *p)
{
	int left_height;
	int right_height;
	
	if(p == NULL)
	return true;
	left_height = height(p->left);
	right_height = height(p->right);
	if(abs(right_height-left_height)<=1 && isBalanced(p->left) && isBalanced(p->right))
	return true;
	return false;
}
void setleft(tree* p,int x)
{
	int y =x;
	if(p==NULL)
	cout << "Invalid Insertion\n";
	else if(p->left != NULL)
	cout << "Invalid Insertion\n";
	else
	p->left = makeTree(y);
}
void setright(tree* p,int x)
{
	int y =x;
	if(p==NULL)
	cout << "Invalid Insertion\n";
	else if(p->right != NULL)
	cout << "Invalid Insertion\n";
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
int main()
{
	tree* node = makeTree(10);
	setleft(node,20);
	setright(node,30);
	setright(node->right,50);
	setleft(node->left,40);
	setleft(node->right,60);
	cout << "preOrder-\n";
	preOrder(node);
	if(isBalanced(node))
	cout << "Balanced" << "\n";
	else
	cout << "Not Balanced" << "\n";
	return 0;
}
