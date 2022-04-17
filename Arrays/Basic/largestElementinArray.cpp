#include<iostream>
#include<cmath>
using namespace std;
int largestElement(int array[],int n){
    int maxElement{array[0]}; 
    for(int i=1;i<n;i++){
        maxElement=max(array[i],maxElement);
    }
    return maxElement;
}
int main()
{
    int n; 
    cin>>n; 
    int array[n]; 
    for(int i=0;i<n;i++) cin>>array[i]; 
    cout<<"Largest Element in array : "<<largestElement(array,n); 
}