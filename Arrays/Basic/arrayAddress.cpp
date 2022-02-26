#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    
    int array[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Address of "<<i+1<<" Element of array is : "<<&array[i]<<endl;
    } 
 
   return 0;
}