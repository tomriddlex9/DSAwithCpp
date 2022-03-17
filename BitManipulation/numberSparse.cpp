// program to check if a number is sparse or not 
// Given a number N. The task is to check whether it is sparse or not.
// A number is said to be a sparse number if no two or more consecutive bits
// are set in the binary representation.
#include<iostream>
using namespace std;
bool isSparse(int n){
    while(n){
        if(n & n>>1) return false; 
        n=n>>1; 
    }
    return true;
}
int main()
{
    int n; 
    cin>>n; 
    cout<<isSparse(n)<<endl; 
}