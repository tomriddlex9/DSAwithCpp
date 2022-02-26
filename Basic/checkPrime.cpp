#include<iostream>
using namespace std;
// the time complexity for the given solution is 
// O(sqrt(n))
bool isPrime(int n){
    if(n==0|| n==1) return false; 
    for(int i=2;i*i<=(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
// the complexity in this appraoch is further reduced from 
// O(sqrt(n)) to O(log (sqrt(n))base 5) 
bool optimisedPrimeCheck(int n){
    if(n==0||n==1) return false; 
    if(n==2||n==3) return true; 
    if(n%2==0 || n%3==0) return false; 
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) 
            return false;
    }
    return true;
}
int main()
{
   int n; 
   cin>>n; 
   if(isPrime(n)) cout<<"Prime"<<endl; 
   else cout<<"Not Prime"<<endl; 
}