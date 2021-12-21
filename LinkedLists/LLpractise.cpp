#include <iostream> 
using namespace std; 

class Node
{ 
    public: 
    int data;
    Node *next; 
    Node(int new_data)
    {
        data=new_data; 
        next=NULL; 
    }
};
void pushToFront(Node **head_ref, int new_data)
{
    Node *newnode=new Node(new_data);
    newnode->next=(*head_ref);
    (*head_ref)=newnode; 
}
void insertAfterNode(Node *prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"Previous Node cannot be NULL\n";
        return; 
    }
    Node *newnode=new Node(new_data);
    newnode->next=prev_node->next; 
    prev_node->next=newnode; 
}
void insertAtEnd(Node **head_ref,int new_data)
{
    Node *newnode=new Node(new_data);
    Node *last=*head_ref; 
    newnode->next=NULL; 
    if(*head_ref=NULL)
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
void printLinkedList(Node *n)
{
    while(n!=NULL)
    {
        cout<<(n->data)<<" ";
        n=n->next;  
    }
}

int main(int argc, char const *argv[])
{
    Node *head=new Node(2);
    pushToFront(&head,1);
    printLinkedList(head);
    pushToFront(&head,0);
    insertAtEnd(&head,4); 
    insertAfterNode(head->next->next->next,3);
    printLinkedList(head);
    return 0;
}
