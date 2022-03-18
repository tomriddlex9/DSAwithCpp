#include<iostream>
using namespace std;
int digitalRoot(int n){
    int sum=0; 
    while(n){
        sum+=n%10; 
        n/=10; 
    }
    if(sum<=9) return sum; 
    return(digitalRoot(sum));
}
int main()
{
    int n;
    cin>>n; 
    cout<<digitalRoot(n)<<endl; 
}