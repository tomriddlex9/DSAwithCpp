#include<iostream> 
using namespace std; 
//defining the structure for each node of the linked list 
// unlike the struct in C , which has all members public by default  
// we are using a Class of C++ , and declaring member public selectively 
class Node{ 
    public: 
        int data; 
        Node *next; 
        Node (int _data,Node *_pointer){
            data = _data; 
            next = _pointer;
        }
};
void printLinkedList(Node *node){
    while(node!=NULL){
        cout<<node->data<<" "; 
        node = node->next; 
    }
}
int main()
{   // three Node pointers created 
    Node *head; 
    Node *second; 
    Node *third;

    // allocating space to the three pointer nodes of the linked list 
    head = new Node(1,second); 
    second = new Node(2,third);
    third = new Node(3,NULL);
 

}