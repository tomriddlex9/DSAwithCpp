#include<iostream>
using namespace std;
int grayToBinary(int n){
    int x=0; 
    while(n){
        x=x^n; 
        n=n>>1;
    }
    return x;
}
int main()
{
    int n;
    cout<<"Enter Binary number to convert to Gray Code : "<<endl; 
    cin>>n; 
    cout<<grayToBinary(n)<<endl;
}