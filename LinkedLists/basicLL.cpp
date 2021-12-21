#include<iostream> 
#define PLL printLinkedList(head)
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
void pushToFront(Node **head_ref, int new_data )
{
    Node *newnode= new Node(new_data);
    newnode->next=(*head_ref);
    (*head_ref)=newnode;    
}
void insertAfterNode(Node *prev_node,int new_data)
{
    if(prev_node==NULL) 
    {
        cout<<"Previous Node cannot be NULL";
        return; 
    }
    Node *newnode=new Node(new_data);
    newnode->next=prev_node->next; 
    prev_node->next=newnode; 
}
void insertAtEnd(Node ** head_ref,int new_data)
{
    Node *newnode=new Node(new_data);
    Node *last=*head_ref; 
    newnode->next=NULL; 
    if(*head_ref==NULL)
    {
        *head_ref=newnode; 
        return ;
    }
    while(last->next!=NULL )
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
    cout<<"\n";

}

int main()
{
    Node *head=new Node(2);
    PLL; 
    pushToFront(&head,1);
    PLL;
    pushToFront(&head,0);
    PLL;
    insertAtEnd(&head,4); 
    PLL;
    insertAfterNode(head->next->next,3);
    PLL;
    return 0; 


}