#include<bits/stdc++.h>
using namespace std; 
bool powerOfTwo(int n){
    if(n==0)return false;
    int counter{0}; 
    while(n){
        n=(n&(n-1));
        counter++;
        if(counter > 1) return false;
    }
    return true;
}
bool optPowerOfTwo(int n){
    if(n==0)return false;
    return ((n&(n-1))==0);
}
int main(){ 
    int n; 
    cin>>n; 
    if(optPowerOfTwo(n)) cout<<"Yes"<<endl; 
    else cout<<"No"<<endl; 
}