#include<iostream> 
using namespace std; 
void printPattern(int n){
    if(n==0) {
        cout<<"----"<<endl; 
        return; 
    }
    cout<<n<<endl; 
    printPattern(n-1);
    cout<<n<<endl;
}
int main()
{
    int n; 
    cin>>n; 
    printPattern(n);
}
