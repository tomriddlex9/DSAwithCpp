#include<iostream>
#include<vector> 
using namespace std;
bool isSortedArray(vector<int>array){
    if(array.size()==1 || array.size()==0 ) return true;
    for(int i=1;i<(int)array.size();i++){
        if(array[i]<array[i-1]) 
        return false ; 
    }
    return true; 
}
int main()
{
    int n;
    cin>>n; 
    vector<int>arr(n); 
    for(int i{0};i<n;i++){
        cin>>arr[i]; 
    }   
    if(isSortedArray(arr)) cout<<"Yes"; 
    else cout<<"No"; 
}