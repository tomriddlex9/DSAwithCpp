// for a given array of integers find the number that is occuring 
// odd numbers of time , here we know that only one such number exists


// based on the property of xor operation on the same number that 
// x^x=0
#include<iostream> 
#include<array>
using namespace std; 
int findOdd(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        temp^=arr[i]; 
    }
    return temp;
}
int main(){
    int arr[]={1,3,4,3,1}; 
    cout<<"only odd occuring number is : "<<findOdd(arr,5)<<endl; 
} // namespace std; 
