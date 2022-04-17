#include<iostream>
using namespace std;
long long powerRecursive(int n,int p){
    if(p==1) return n; 
    return (n*powerRecursive(n,p-1));
}
int main()
{
     int n ,p; 
     cin>>n>>p; 
     cout<<powerRecursive(n,p)<<endl; 
}