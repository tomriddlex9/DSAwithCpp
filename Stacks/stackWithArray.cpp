#include<iostream> 
using namespace std; 
int top=-1; 
const int MAX{10}; 
int stackArr[MAX];
void push(int item); 
int pop(); 
int peek(); 
int isEmpty(); 
int isFull(); 
void display(); 
int main()
{ 
	push(1); 
	push(2); 
	push(3); 
	push(4); 
	display(); 
	cout<<"\n" ; 
	pop(); 
	push(7); 
	cout<<"\n";
        push(0);
	peek(); 
        peek(); 	
	display(); 
	return  0; 
} 
void push(int item)
{
	// check overflow
	if(isFull)
	{ 
		cout<<"Stack Overflow\n" ; 
		return;  
	} 
	top=top+1; 
	stackArr[top]=item; 
} 
int pop()
{
	// check underflow
	if(isEmpty)
	{
		cout<<"Stack UnderFlow\n"; 
		exit(1); 
	} 
	int item{stackArr[top]}; 
		--top; 
		return item; 
}
int peek()
{
     // check underflow 
     if(isEmpty)
     { 
	     cout<<"Stack Underflow\n"; 
	     exit(1); 
     } 
     int item{stackArr[top]}; 
     return item; 
} 
int isEmpty()
{
      if(top==-1) return 1; 
      else return 0; 
} 
int isFull()
{
	if(top==MAX-1) return 1; 
	else return 0; 
} 
void display()
{
	if(isEmpty) 
	{ 
		cout<<"Stack is Empty" ;
	} 
	for(int i{0};i<MAX;i++)cout<<stackArr[i]<<"\n";
} 
	
