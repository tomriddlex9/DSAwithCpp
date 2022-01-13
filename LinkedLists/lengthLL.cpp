#include <iostream>
using namespace std;
// creating a class to define the structure of a linked list node 
class Node{
    public: 
        int data; 
        Node *next; 
} ;
void push(Node **head_ref,int new_data){
    Node *new_node = new Node(); // create a pointer to new node 
    new_node->data = new_data; // insert the data into the node 
    new_node->next = (*head_ref); // reference the pointer of node to recent head 
    (*head_ref) = new_node;  // reassign the head pointer to new node 
} 
int getCount(Node *head){
    int count = 0; // initialise the counter 
    Node *current = head; 
    while(current !=NULL ) // check if last node reached 
    {
        count++; 
        current = current->next; 
    }
    return count; 
}
void printLinkedList(Node *head){
    if(head == NULL){
        cout<<"empty list ! "<< endl; 
        return; 
    }
    Node *current = head; 
    while(current !=NULL){
        cout<<current->data<<" -> "; 
        current = current->next; 
    }
    cout<< "❤️" << endl; 
}   

// main starts here 
int main(){ 
    // start with empty list 
    Node *head = NULL ;  
    // using push to construct the list 
    // 1    2   1   3   1
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
    cout<<"Number of nodes in the list : "<<getCount(head)<<endl;
    cout<<"The linked list formed is : ";
    printLinkedList(head);
}