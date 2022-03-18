#include<iostream>
using namespace std;
void printerToOne(int n){
    if(n==0 ) return; 
    cout<<n<<" "; 
    printerToOne(n-1);
}
void printerFromOne(int n){
    if(n==0) return ; 
    printerFromOne(n-1);
    cout<<n<<" ";
}
int main()
{
    int n; 
    cin>>n; 
    printerToOne(n);
    cout<<endl; 
    printerFromOne(n);
    cout<<endl;
}   