#include <iostream>
#include <algorithm> 
#define printarray(array) for(auto &x:array)cout<<x<<" ";
using namespace std; 
int main()
{
 srand(time(0));
 int array[20];
 for(int i{0};i<20;i++)array[i]=rand()%1000; 
 cout<<"The unsorted array is : \n";
 printarray(array);
 sort(begin(array),end(array));
 cout<<"\nThe sorted array is : \n";
 printarray(array);
 int otherarray[]{45,453,675567,8,76};
 cout<<"\nThe other array is : ";
 printarray(otherarray);
 return 0; 

}