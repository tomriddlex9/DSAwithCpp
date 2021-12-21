#include<iostream>
using namespace std; 
void solution()
{
    int a{},b{};
    cin>>a>>b; 
    cout<<"The sum of "<<a<<" and "<<b<<" is : "<<a+b<<"\n";
}
int main(int argc, char const *argv[])
{
    int tc; 
    cin>>tc; 
    while(tc--){solution();}
    return 0;
}
