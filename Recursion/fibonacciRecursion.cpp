#include<iostream>
using namespace std;
long long fibonacciRecursive(int n){
    if(n==1 || n==2 ) return 1; 
    return(fibonacciRecursive(n-1)+fibonacciRecursive(n-2)); 
}
int main()
{
    int n; 
    cin>>n;
    cout<<fibonacciRecursive(n)<<endl;  
}