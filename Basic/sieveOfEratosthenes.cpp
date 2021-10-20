#include<bits/stdc++.h> 
using namespace std; 
void getPrimes(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p{2};p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(int i{p*p};i<=n;i+=p)
            prime[i]=false; 
        }
    }
    for(int p{2};p<=n;p++)
    {
        if(prime[p]) cout<<p<<" ";
    }
    cout<<"\n";
}
int main(int argc, const char** argv) 
{
    int tc; 
    cin>>tc; 
    while(tc--)
    {
        int n{}; 
        cin>>n; 
        getPrimes(n);
    }
    return 0;
}