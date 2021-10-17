#include <iostream> 
#define NEWLINE cout<<"\n";
using namespace std;
class Node 
{
    public : 
     int data; 
     Node *next; 
};
void PushToFront(Node **head_ref, int new_data)
{
    Node *newnode= new Node();// allocate the new node 
    newnode->data=new_data; // set newnode data to the given input data 
    newnode->next= (*head_ref);//set the pointer of the newnode to the previously head pointer 
    (*head_ref)=newnode; // set the head pointer to the new node added 
}
void InsertAfterNode(Node *prevnode, int new_data)
{
    // function to add a new node after a certain node given the 
    // pointer to the node after which the new node is to added 
    // and the data of the  new node to be added

    if(prevnode==NULL) // check if the previous node is not empty or invalid
    {
        cout<<"Previous Node cannot be NULL\n";
        return; 
    }
    Node *newnode= new Node(); // allocate the new node
    newnode->data=new_data; // set the data of the new node to the data 
    newnode->next=prevnode->next; // set the pointer of the previous node to new node's next pointer 
    prevnode->next= newnode;// reset the pointer from previous node to the newly added node 
}
void InsertAtEnd(Node **head_ref,int new_data)
{
    // function to add a new node at the end of linked list 
    // given the pointer to the head node and the data to be 
    // added to the node being appended 
    Node *newnode=new Node(); // allocate the new node 
    Node *last=*head_ref; // create a new pointer as last and point it to the head node 
    newnode->data=new_data;// add the data to the newly created node 
    newnode->next=NULL; 
    if(*head_ref==NULL)// if the head linked list is empty then simply point to the head node to 
                      // the node being added 
    {
        *head_ref=newnode;
        return; 
    }
    while(last->next!=NULL) // traverse the linked list untill the last node is reached 
    {
        last=last->next;  // and then set the pointer of the last node' next to the newly created node 
                            // to append it to the end of the list 
    }
    last->next=newnode;
    return;
}
void PrintLinkedList(Node *n) 
{
    // function to traverse and print the linked list 
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next; 
    }
}
int main()
{
    Node *head=NULL; 
    Node *second=NULL; 
    Node *third=NULL; 
    head = new Node();
    second = new Node();
    third = new Node();
    head->data=1; 
    head->next=second; 
    second->data=2; 
    second->next=third; 
    third->data=3; 
    third->next=NULL; 
    PrintLinkedList(head);
    NEWLINE
    PushToFront(&head,5);
    PrintLinkedList(head);
    NEWLINE
    PushToFront(&head,4);
    PrintLinkedList(head);
    NEWLINE
    InsertAfterNode(head->next,8);
    PrintLinkedList(head);
    NEWLINE
    InsertAtEnd(&head,9);
    // the new list should be 4 5 1 8 2 3 9 
    PrintLinkedList(head);
    NEWLINE
    return 0; 

}