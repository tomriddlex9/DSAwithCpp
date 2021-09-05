#include<iostream> 
#include<unistd.h> 
using namespace std; 
int main()
{ 
	unsigned int second=1000000; 
	srand(time(0)); 
	while(1)
	{ 
		int number=rand()%1000; 
		cout<<number<<endl; 
		usleep(second); //sleep for 1 second for other 
		//random int to be created
	}
	return 0; 
}
