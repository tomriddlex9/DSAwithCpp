#include<iostream>
#include<queue>
using namespace std; 
// defining the structure for a node in the tree 
// consist of int data  
// self referential elements left and right child 
// and a constructor function 
struct Node
{
    int data; 
    struct Node *left; 
    struct Node *right; 

};
// function to create a new node 
// takes the data as the input parameter
// and returns the pointer of the created node to use a reference 
Node *CreateNode(int data)
{
    // allocation of a new node 
    Node *newNode= new Node();
    // if node not created due to insufficient memory or other error 
    if(!newNode) 
    {
        cout<<"Memory Error\n";
        return NULL; 
    }
    // set the node data to data and its child node to null 
    newNode->data=data; 
    newNode->left=NULL;
    newNode->right=NULL; 
    return newNode; //return the node pointer to be used as a reference 
}
// function to insert a key value into the binary tree
Node *InsertNode(Node *root,int data)
{
    // if the tree is empty then insert the key into the root node
    if(root==NULL)
    {
        root=CreateNode(data);
        return root; 
    }
    queue<Node*>q; 
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if (temp->left !=NULL) q.push(temp->left);
        else{
            temp->left=CreateNode(data);
            return root; 
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        else {
            temp->right=CreateNode(data);
            return root; 
        }
    }
    
    return root;
}
// function to perform an inorder traversal of the binary tree 
void inorder(Node *temp)
{
    // the tree is empty then return nothing 
    if(temp==NULL) return ; 
    inorder(temp->left);
    cout<<temp->data<<"  ";
    inorder(temp->right);
}
int main()
{
    Node *root = CreateNode(4); 
    root->left = CreateNode(11);
    root->left->left=CreateNode(7);
    root->right=CreateNode(9);
    root->right->left= CreateNode(15);
    root->right->right=CreateNode(8);
    cout<<"Inorder Traversal before insertion : ";
    inorder(root);
    cout<<"\n";
    int key=12;
    root = InsertNode(root,key);
    cout<<"Inorder Traversal after insertion : ";
    inorder(root); 
    cout<< "\n";
    return 0; 

}