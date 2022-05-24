#include<iostream> 
#include<array> 
using namespace std; 
int main(){ 
    array<int,100>arr; 
    arr.fill(4);
    arr[7]=34;
    cout<<arr.data(34);
    cout<<arr.at(5)<<endl;
    cout<<arr.begin()<<" "<<arr.end()<<endl;  
    return 0;
}