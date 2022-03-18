#include<iostream>
using namespace std;
// non tail recursive solution 
int sumOfDigits(int n){
    if(n<=9) return n; 
    return((n%10)+sumOfDigits(n/10)); 
}
int tailSumOfDigitsWR(int n,int sum){
    if(n==0) return sum; 
    return(tailSumOfDigitsWR(n/10,sum+n%10)); 
}
// wrapper function for tail recursive sum of Digits Function 
int sumOfDigitsTR(int n){
    return tailSumOfDigitsWR(n,0);
}
int main()
{
    int n; 
    cin>>n; 
    cout<<sumOfDigits(n)<<endl; 
    cout<<sumOfDigitsTR(n)<<endl;
}