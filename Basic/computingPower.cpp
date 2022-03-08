#include<iostream>
using namespace std;
// program to compute the value of 
// x raised to the power n 
long long powerBasic(int x,int n){
    long ans=x;
    // the basic method is to multiply the number 
    // x itself n times 
     // Complexity = O(n)
    for(int i=0;i<n-1;i++){
         ans*=x;
    }
    return ans;
}
//we know that any number can be represented as a power of two 
//so in the binary representation of n , if we find a set bit 
long long optimizedPower(int x,int n){
    if(n==0)return 1; 
    long long temp=optimizedPower(x,n/2);
    temp*=temp;
    if(n%2==0){
        return temp; 
    }
    else 
        return temp*x;
}
long long optimizedPowerTwo(int x,int n){
    if(n==0) return 1; 
    long long temp=optimizedPowerTwo(x,n>>1); 
    temp*=temp; 
    if((n&1)==0) return temp; 
    else return temp*x; 
}
int main()
{
   int x,n;
   cin>>x>>n; 
   cout<<powerBasic(x,n)<<endl;
   cout<<optimizedPower(x,n)<<endl;
   cout<<optimizedPowerTwo(x,n)<<endl;
}