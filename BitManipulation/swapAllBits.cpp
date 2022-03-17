#include<iostream>
using namespace std;
int swapAllBits(int n){
    int evenBits = ( n & 0xAAAAAAAA);
    int oddBits = (n & 0x55555555);
    evenBits>>=1; 
    oddBits<<=1; 
    return(evenBits | oddBits);
}
int main()
{
   int n; 
   cin>>n; 
   cout<<swapAllBits(n)<<endl;
}