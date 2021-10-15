// program to calculate the factorial of a given number
// and then print the number of digits in its factorial 

/* 1. The First Approach is to simply calculate the factorial 
    and then count the number of digits in the factorial using a loop
    . but this solution fails for very large values of factorial
    2. The other approach is that we can use the property of Log that 
    log(a*b)=log(a+b);
    so log(n!)=log(n)+log(n-1)+log(n-2)...+1 
    and  Now, observe that the floor value of log base 
10 increased by 1, of any number, gives the
number of digits present in that number.

Hence, output would be : floor(log(n!)) + 1.
*/ 

#include <iostream>
#include <cmath>
using namespace std; 
long long int fact(int n)
{
    // to store possible large values
    long long int factorial{1};
    // check for edge cases 
    if(n<0) return -1; 
    // iterating from 1 to n ; 
    for(int i{1};i<=n;i++) factorial*=i; 
    return factorial;
}
int countdigits(long long int factorial)
{
    int counter{0};
    if(factorial<0)return -1; 
    while(factorial>0)
    {
       factorial/=10; 
       counter++; 
    }
    return counter; 
}
int countDigitsUsingLog(int n)
{
    if(n<0)return  0; 
    if(n<=1)return 1; 
    double digits{0};
    for(int i{2};i<=n;i++)digits+=log10(i);
    return(floor(digits)+1);
}
int main()
{
    int n{}; 
    cin>>n;
    cout<<fact(n)<<"\n"; 
    cout<<countdigits(fact(n))<<"\n";
    cout<<countDigitsUsingLog(n)<<"\n";
}