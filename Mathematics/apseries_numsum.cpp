// program to calculate the number and sum for
// the given values of an AP Series 
// given a,d,n . Find A(n) and S(n);
#include<iostream> 
using namespace std;
int positionN(int a, int d,int n)
{
    // formula for the position is : 
    // T(n)= a +( (n-1)*d )
    int temp{a+((n-1)*d)}; 
    return temp; 
} 
long sumN(int a,int d,int n)
{
    // formula for sum till n numbers is: 
    // S(n)= (n*(2a+((n-1)*d)))/2 
       long sum{(n*(2*a+((n-1)*d)))/2};
       return sum;
}
int main()
{
    int a{},d{},n{};
    cout<<"Enter A , D and N respectively : "; 
    cin>>a>>d>>n; 
    cout<<"\nA(n) = "<<positionN(a,d,n)<<"\n"; 
    cout<<"\nS(n) = "<<sumN(a,d,n)<<"\n";
    return 0; 
}