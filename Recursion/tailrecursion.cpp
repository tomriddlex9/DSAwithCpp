//program to convert a non-tail recursive function to 
// a tail recursive function 

#include<iostream>
using namespace std;
long long NonTailFactorial(int n){
    if(n==0 || n==1 ) return 1; 
    return (n* NonTailFactorial(n-1)); 
}
// n to get the factorial number and a is used to store the value 
// since all the time we were saving stack frames to store the value 
// of the factorial 
long long TailRecursiveFactorial(int n,int a){
    // till the base case we calculate the factorial value of 
    // n and save it to a and then we just ask all the functions 
    // to return the value of a .
    if(n==1 ) return a;  
    // the expanded results of the two parameters look like 
    // (n,1*n)
    // (n-1, 1*n*n-1)
    // .....
    // (1, 1*(n)*(n-1)*(n-2)*(n-3)*....*1 )
    return TailRecursiveFactorial(n-1,n*a); 
}
int main()
{
    int n; 
    cin>>n; 
    cout<<NonTailFactorial(n)<<endl; 
    // here we are supplying 1 as the initial value for a .
    // which will be storing the multiplication of all numbers (factorial )
    // and 1 is the mutiplicative identity 
    cout<<TailRecursiveFactorial(n,1)<<endl; 
}