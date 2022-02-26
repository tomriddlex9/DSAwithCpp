#include<bits/stdc++.h>
using namespace std;
void divisors(int n){
    vector<int>divisors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0) {
            divisors.push_back(i); 
            if(i!=n/i)
                divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
    for(int x:divisors){
        cout<<x<<" ";
    } 
    cout<<endl;
}
void optimisedDivisors(int n){
    int i; 
    for(i=1;i*i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(;i>=1;i--){
        if(n%i==0) cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
   int n; 
   cin>>n;
   divisors(n); 
   optimisedDivisors(n);
}