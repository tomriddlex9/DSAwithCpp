#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
   cout<<"enter no of elements:"; 
   int count,sum{0}; 
   cin>>count;
   vector<int>arr; 
   arr.resize(count);
   for(int i=0;i<count;i++){
       arr[i]=i; 
       sum+=arr[i];
   } 
   cout<<"\nThe sum is : "<<sum<<endl;
   return 0;
}