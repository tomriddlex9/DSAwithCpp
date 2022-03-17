#include<bits/stdc++.h>
using namespace std;
// a =11 = 1011 
// b =9  = 1001
int posOfRightMostDiffBit(int a,int b)
{
    int counter{0}; 
    while(!(a&1)^(b&1)){
        counter++;
        a=a>>1; 
        b=b>>1;
    }
    return counter+1;
}
int main()
{
   int a;int b; 
   cin>>a>>b; 
  cout<<posOfRightMostDiffBit(a,b)<<endl;
}