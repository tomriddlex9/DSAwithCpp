#include<iostream> 
using namespace std; 
void printLoopNto1(int n)
{
    if(n<1){}
    else 
    {   cout<<n<<" "; 
        printLoopNto1(n-1);
    }
}
void printLoop1toN(int n)
{
    static int i=1;
    if(i<=n && cout<<i++<<" ") printLoop1toN(n);
}
int main()
{
    int n{}; 
    int i=1; 
    cout<<"Enter N: ";
    cin>>n; 
    printLoopNto1(n);
    cout<<"\n";
    printLoop1toN(n);
}