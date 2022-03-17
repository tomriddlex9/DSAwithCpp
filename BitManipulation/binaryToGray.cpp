//You are given a decimal number N. You need to find the
// gray code of the number N and convert it into decimal
#include<iostream>
using namespace std;
int grayConverter(int n){
    int res=n; 
    n>>=1; 
    res^=n; 
    return res;
}
int main()
{
   int n; 
   cin>>n; 
   cout<<grayConverter(n)<<endl;
}