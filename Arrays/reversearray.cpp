#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
void reverseArray(int &array,int size)
{
 for(int i=0;i<size/2;i++)
 {
     array[i]=array[size-i-1];
 }   
 for(int x{0};x<size;x++){
     cout<<x<<" ";
 }
 cout<<endl;
}
int main()
{
   int Array[13] = {4,6,67,7,65,87,123,23,7,68,67823,76,8};
   int arraysize = sizeof(Array)/sizeof(Array[0]); 
   reverseArray(Array[0],arraysize);
   return 0;
}