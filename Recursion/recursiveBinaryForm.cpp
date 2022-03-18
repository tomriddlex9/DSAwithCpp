// the given program traverses from the MSB to LSB and reaches the LSB first 
// then it prints each bit , if the bit is set then 1 and else 0 
// which gives us the binary representation of the number 

#include<iostream>
using namespace std;
void printBinaryRecursive(int n){
    if(n==0) return ; 
    printBinaryRecursive(n/2); 
    cout<<n%2; 
}
void alternateBinaryRecursive(int n){
    if(n==0) return; 
    printBinaryRecursive(n>>=1); 
    cout<<(n&1);
}
int main()
{
   int n; 
   cin>>n; 
   printBinaryRecursive(n);
   cout<<endl; 
   alternateBinaryRecursive(n);
   cout<<endl;
}