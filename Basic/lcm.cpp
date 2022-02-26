#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a; 
    return gcd(b,a%b);
}
int lcm(int a,int b){
    // we know the formula 
    // a*b = gcd(a,b) * lcm(a,b);
    // so , lcm(a,b)= (a*b)/gcd(a,b)
    return ((a*b)/gcd(a,b));

} 
int main()
{
   int a,b; 
   cin>>a>>b; 
   cout<<lcm(a,b)<<endl;
}