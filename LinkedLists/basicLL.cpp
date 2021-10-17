#include<iostream>
using namespace std; 
struct Node{
    int value; 
    struct Node *link; 
};
void display(Node *start)
{
    //create a pointer to the struct node
    struct Node *p; 
    // check if the linked list is not empty
    if(start==NULL)
    {
        cout<<"List is Empty\n";
        return ; 
    }
    // assign the pointer to starting node 
    p=start; 
    cout<<"List is: \n";
    // iterate untill the end of the linked list is reached 
    while(p!=NULL)
    {
        cout<<p->value<<"\n";
        p=( p->link );  
    }
}
void insert(Node)
{
    
}

int main(int argc, const char** argv) 
{
    Node head; 
    Node *p ; 
       
    
    return 0;
}