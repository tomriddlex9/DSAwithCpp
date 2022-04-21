// program to remove all the duplicates from a sorted array 
// and reduce the size of original array to only the 
// number of distinct elements 

#include<bits/stdc++.h>
using namespace std;
/* 
naive solution that copies all distinct elements of the array to another temp array 
resizes the original array and puts back the distinct elements only to the original array 
Time Complexity = O(n)
Space Complexity = O(n)
*/ 
void removeDuplicatesNaive(vector<int> &arr){
    vector<int> temp(arr.size()); 
    temp[0]=arr[0]; 
    int res{1}; 
    for(int i{1};i<(int)arr.size();i++){
        if(arr[i]!=arr[i-1])
        temp[res++]=arr[i]; 
    }
    arr.resize(res); 
    for(int i{0};i<res;i++){
        arr[i]=temp[i]; 
    }
}
void removeDuplicatesOpt(vector<int> &arr){
    
    if(arr.size()==0 || arr.size()==1) return; 
    // j to store the index of next unique element 
    int counter=1; 
    for(int i=1;i<(int)arr.size()-1;i++){
        if(arr[i]!=arr[i+1]){ 
            arr[counter++]=arr[i]; 
        }
    }
    arr[counter++]=arr[arr.size()-1];
    arr.resize(counter);
}
int main()
{
    srand((int)time(0)); 
    int n=20;   
    vector<int>arr(n); 
    vector<int>arr2(n); 
    for(int i{0};i<n;i++){
        arr[i]=rand()%20; 
        arr2[i]=arr[i];    
    }
    // orginial created array which will be sorted before 
    // using the function 
    for(int i:arr){
        cout<<i<<" "; 
    }
    cout<<endl; 
    sort(arr.begin(),arr.end()); 
    removeDuplicatesNaive(arr);  
    // solution using the naive approach with both space and time complexity being O(n)
    for(int i:arr){
        cout<<i<<" "; 
    }
    cout<<endl;
    sort(arr2.begin(),arr2.end()); 
    removeDuplicatesOpt(arr2); 
    // solution using the memory optimised approach that takes constant extra space 
    for(int x:arr2){
        cout<<x<<" "; 
    }
    cout<<endl; 
}