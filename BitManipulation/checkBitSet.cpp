#include<bits/stdc++.h>
using namespace std;
bool checkKthBitSet(int n,int k){
   int x=(int)pow(2,k);
   return (x&n)?true :false;  
}
bool optimizedCheckKthBit(int n,int k){
    return ((n &(int)pow(2,k)));
}
// instead of power we can also use left shift operator and 
// shift the 1 to k positions towards the left 
// so line 8 can be written as 
// return (n&(1<<k))
int main()
{   
    int n,k; 
    cin>>n>>k; 
    if(optimizedCheckKthBit(n,k)) cout<<"Yes"<<endl; 
    else cout<<"No"<<endl;
    if(checkKthBitSet(n,k)) cout<<"Yes"<<endl; 
    else cout<<"No"<<endl;
}