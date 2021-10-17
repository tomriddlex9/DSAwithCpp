#include<iostream> 
using namespace std; 
int main()
{ 
    int i{0},sum{0},arr[6]{4,2,6,0,5,10};
    while(arr[i])
    {
        sum+=arr[i];
        i++; 
    }
    cout<<"sum = "<<sum; 
    return 0; 
}