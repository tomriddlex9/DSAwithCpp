#include<iostream> 
#include<queue> 
using namespace std; 
struct Node
{
	public : 
		int data; 
		struct Node *left; 
		struct Node *right; 
} ;
Node* createNode( int data)
{ 
	Node *newNode= new Node(); 
        if(!newNode)
	{ cout<<"memory error\n"; 
		return NULL; 
	} 
	newNode->data=data; 
	newNode->right=NULL; 
	newNode->left=NULL; 
	return newNode; 
}
Node *InsertNode(Node *root, int data) 
{ 
	if(root==NULL) 
	{ 
		root=createNode(data); 
		return root; 
	}
	queue<Node *>q; 
	q.push(root); 
	while(!q.empty())
	{
		Node *temp=q.front(); 
		q.pop(); 
		if(temp->left!=NULL) q.push(temp->left); 
		else 

		{
			temp->left = createNode(data); 
			return root; 
		}
		if(temp->right!=NULL)q.push(temp->right); 
		else 
		{
			temp->right=createNode(data);  
			return root; 
		} 
	}
	return root ; 
} 
void inorder(Node *temp) 
{
	if(temp==NULL)return ; 
	inorder(temp->left); 
	cout<<temp->data<<" " ; 
	inorder(temp->right); 
} 
	     

		
int main()
{
	Node *root= createNode(8); 
	root->left=createNode(11); 
	root->right=createNode(14); 
	root=InsertNode(root,23); 
	root=InsertNode(root,43); 
	root->right->left=createNode(12); 
	root=InsertNode(root,84); 
	cout<<"The Binary Tree with inorder traversal is : \n"; 
	inorder(root); 
	// main code here 
	return 0 ; 
} 
