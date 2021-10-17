// program to calculate the number and sum for
// the given values of a GP Series 
// given a,r,n . Find A(n) and S(n);
#include <iostream>
#include <cmath>  
using namespace std;
long long int positionN(int a, int r,int n)
{
    // formula for the position is : 
    //A(n)=a*(pow(r,n-1))
    long long int temp= a*(pow(r,n-1));
    return temp; 
} 
long long int sumN(int a,int r,int n)
{
    // formula for sum till n numbers is: 
    // 
    // for r=1 , S(n)=a*n; 
    // for r!=1 , S(n)=(a *(1-pow(r,n)))/(1-r)
    long long int sum; 
       if(r=1)
       {
        sum=a*n;
       }
         sum=(a *(1-pow(r,n)))/(1-r);
       return sum;
}
int main()
{
    int a{},r{},n{};
    cout<<"Enter A , D and N respectively : "; 
    cin>>a>>r>>n; 
    cout<<"\nA(n) = "<<positionN(a,r,n)<<"\n"; 
    cout<<"\nS(n) = "<<sumN(a,r,n)<<"\n";
    return 0; 
}