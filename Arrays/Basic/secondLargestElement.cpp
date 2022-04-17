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
int naivesecondLargestElement(int array[],int n){
    if(n==0) return -1; 
    if(n==1) return array[0]; 
    int maxElement{largestElement(array,n)}; 
    int secondLargest{-1}; 
    for(int i=0;i<n;i++){
        if(array[i]==maxElement){
            continue;
        }
        secondLargest=max(array[i],secondLargest);
    }
    return secondLargest; 
}
int secondLargestElement(int array[],int n){
    int res{-1},largest{0}; 
    for(int i=1;i<n;i++){
        if(array[i]>array[largest])
        {
            res=largest; 
            largest=i; 
        }
        else if(array[i]!=array[largest]){
            if(res==-1 || array[i]>array[res])
                res=i; 
        }
    }
    if(res==-1) return -1; 
    return array[res]; 
}
int main()
{
    int n; 
    cin>>n; 
    int array[n]; 
    for(int i=0;i<n;i++) cin>>array[i]; 
    cout<<"Largest Element in array : "<<largestElement(array,n)<<endl; 
    cout<<"Second Largest Element in the array is : "<<secondLargestElement(array,n)<<endl; 
}