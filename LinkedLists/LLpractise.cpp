#include<iostream> 
using namespace std; 
class Node
{
    public : 
    int data; 
    Node *next;
};
void pushatStart(Node **head_ref,int new_data)
{
    Node *newnode= new Node();
    newnode->data=new_data;
    newnode->next=(*head_ref);
    *head_ref=newnode; 
}
void append(Node **head_ref, int new_data)
{
    Node *newnode=new Node();//allocate node
    Node *last= *head_ref; // for traversal till the last 
    newnode->data=new_data; // set the data to the new node 
    newnode->next=NULL; // since the element is to be appended to the end , it points to NULL 
    if(*head_ref==NULL )// check if the linked list is empty 
    {
        *head_ref=newnode; 
        return; 
    }
    while(last->next!=NULL)
    {
        last=last->next; 
    }
    last->next=newnode; 
    return; 

}
void displayLL(Node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"  ";
        node=node->next; 
    }

}
void insertAfter(Node *prev_node,int new_data)
{
    // check if the prev node is not null 
    if(prev_node==NULL)
    {
        cout<<"Previous node cannot be NULL ";
        return; 
    }
    Node *newnode= new Node(); // allocate the node
    newnode->data=new_data; 
    newnode->next= prev_node->next; 
    prev_node->next=newnode; 
}

int main()
{
    Node *head=NULL; 
    append(&head,8);
    append(&head,9);
    append(&head,11);
    displayLL(head);
    insertAfter(head->next,10);
    cout<<"\n";
    displayLL(head);
    cout<<"\n";
    pushatStart(&head,7);
    displayLL(head);
    cout<<"\n";
    pushatStart(&head,6);
    displayLL(head);
    cout<<"\n";
    return 0; 
}