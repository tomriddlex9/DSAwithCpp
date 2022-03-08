#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
int countSetBits(int n){
   int counter{0}; 
   while(n!=0){
      if(n&1) counter++; 
      n=n>>1;
   }
   return counter;
}
int main()
{
   int n; 
   cin>>n;
   cout<<countSetBits(n)<<endl;
   return 0;
}