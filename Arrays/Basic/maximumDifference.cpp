#include<vector>
#include<iostream>
int max(int a,int b){
    return a>b?a:b; 
}
using namespace std;
int maximumDifference(vector<int>array){
    int n{(int)array.size()}; 
    vector<int>differences(n); 
    differences[n-1]=-1; 
    int maxTillNow=array[n-1]; 
    for(int i{(int)array.size()-2};i>=0;i--){
        maxTillNow=max(maxTillNow,array[i]); 
        differences[i]=maxTillNow-array[i]; 
    }
    int maxDifference{-1}; 
    for(int i=0;i<n;i++){
        maxDifference=max(maxDifference,differences[i]);
    }
    return maxDifference;
}
int maxDifference(vector<int> array){
    if(array.size()==1) return array[0]; 
    int maxDiff=array[1]-array[0]; 
    int minVal{array[0]};
    for(int x:array){
        minVal=min(minVal,x);
        maxDiff=max(maxDiff,x-minVal);  
    }
    return maxDiff; 
}
int main()
{
    vector<int>array={7,9,5,6,3,2};
    vector<int>array2={10,20,30};
    array={0,0,0,0,0,1};
    cout<<maximumDifference(array)<<endl; 
    cout<<maxDifference(array)<<endl;
}