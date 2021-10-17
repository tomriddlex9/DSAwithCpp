#include<iostream> 
using namespace std; 
const int MAX{100};
class Stack
{
	int top; 
    public : 
		int a[MAX]; // create an array with maximum size of 100 
		// to hold the stack 
		Stack(){top=-1;}// constructor for stack that creates an empty stack 
		bool push(int x);
		int pop();
		int peek();
		bool isEmpty();
		bool isFull();
		void display(); 

};
void Stack::display()
{
	if(isEmpty())
	{
		cout<<"Stack is Empty\n";
		return; 
	}
	for(int i=top;i>=0;i--)
	{
		cout<<"||"<<a[i]<<"||\n";
	}
	cout<<"=====\n\n";
}
bool Stack::push(int item)
{
	// check overflow
	if(isFull())
	{
		cout<<"Stack Overflow\n" ; 
		return false;  
	} 
		a[++top]=item; 
		cout<<item<<" pushed into stack\n";
		return true;  
}
int Stack::pop()
{
	//check underflow condition 
	if(isEmpty())
	{
		cout<<"Stack UnderFlow\n";
		return 0; 
	}
	 
		int item{a[top--]};
		return item; 
	
}
int Stack::peek()
{
	if(isEmpty())
	{
		cout<<"Stack UnderFlow\n";
		return 0; 
	}

		return(a[top]);
}
bool Stack::isEmpty()
{
	if(top==-1)return true; 
	else return false; 
}
bool Stack::isFull()
{
	if(top==MAX-1)return true; 
	else return false; 
}
int main()
{ 
	class Stack  s; 
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<"\n";
	s.display(); 
	cout<<s.pop()<<" popped from stack\n";
	s.display(); 
	cout<<s.pop()<<" popped from stack\n"; 
	s.push(67);
	cout<<"\n";
	s.display();
	return  0; 
} 

