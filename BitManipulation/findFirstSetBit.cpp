// program to print the index of the first rightmost set bit 
// for example : 32 = 00100000
// so the output should be 6 , or n+1 for 2^n 
// similarly for 18=00010010 
// the output is 2 

#include<iostream>
#include<cmath>
using namespace std;
int getFirstSetBit(int n){
    int res=n &(~(n-1));
    int bit{0};
    while(res){
        res/=2;
        bit++;
    }
    return bit;
}
int optimisedGetFirstSetBit(int n){
    int res=(int)log2(n&(~(n-1)));
    return res+1;
}
int main()
{
   int n; 
   cin>>n;
   cout<<getFirstSetBit(n)<<endl; 
   cout<<optimisedGetFirstSetBit(n)<<endl;
}