#include<iostream> 
using namespace std; 
int main()
{ 
	//create an array of 10 elements and initialise them to zero
	int array[10]={}; 
	//fill the array with random values 
	//seed the random function using the current time 
	srand(time(0)); 
	while(1)
	{ 
	
	 for(int i=0;i<10;i++)
	{ 
		array[i]=rand()%100; 
	} 
	//display the value of array elements 
	for(int i=0;i<10;i++)cout<<array[i]<<" "; 
	cout<<endl; 
	return 0; 
} }
