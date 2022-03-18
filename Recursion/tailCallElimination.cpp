/* The following program is a demonstration of how modern 
compilers convert a tail-recursive function to a non recursive optimized 
function to Optimise stack space and preserve memory 
This process is called Tail Call Elimination 
*/ 
#include<iostream>
using namespace std;
long long tailRecursiveFactorial(int n ,long long a){
    if(n==1) return a;
    return tailRecursiveFactorial(n-1,n*a);  
}
long long tailEliminatedFactorial(int n,long long a ){
    start: 
        if(n==1) return a; 
        a*=n; 
        n-=1; // updating the parameter 
    goto start; 
}
int main()
{
    int n;
    cin>>n;
    cout<<"Tail Recursive Function called: "<< tailRecursiveFactorial(n,1)<<endl; 
    cout<<"After using Tail call Elimination "<< tailEliminatedFactorial(n,1)<<endl;
}