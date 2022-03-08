#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
// in left shift ,we create a number whose only k'th bit is set 
// and then do bitwise and ( &) with our number to check if the result is non zero 
// which proves that the k'th bit of our number was non zero or 1 

void kthBitLeftShift(int n,int k){
    if((n & (1<<(k-1)) )) cout<<"Yes";
    else cout<<"No";
}

// in right shift ,we shift the k'th bit of our number to the first position of the number , 
// if we dont want to change the number than we can perform the operation on its copy
// after which we do a bitwise and (&) with the first bit using 1 (which was earlier k'th bit)
// if the output is 1 , then we know that the k'th bit of the number was non zero or 1 

void kthBitRightShift(int n,int k){
    if(((n>>(k-1)) & 1 ) == 1 ) cout<<"Yes";
    else cout<<"No";
}

int main()
{
    // here n is the number to check the position of the bit 
    // and k is the position of the bit to check . 
   int n,k; 
   cin>>n>>k; 
   kthBitLeftShift(n,k);
   cout<<endl; 
   kthBitRightShift(n,k);
   cout<<endl; 
   return 0;
}