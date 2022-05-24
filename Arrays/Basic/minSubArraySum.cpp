// modification of the kadane's algorithm to find out the minimum possible subarray sum 
// which is usually helpful for finding the maximum Circular Subarray Sum 

#include<iostream>
#include<vector> 
#include<cmath>
using namespace std; 
int minSubArraySum(vector<int>array){
    int res{array[0]}; 
    int currMin{array[0]}; 
    int endIndex{0}; 
    int sum{0}; 
    int startIndex{0};
    for(int i=0;i<(int)array.size();i++){
        currMin=min(currMin+array[i],array[i]); 
        if(currMin<res){
            res=currMin; 
            endIndex=i; 
        }
    }
    //loop to find the start index 
    for(int i=endIndex;i>=0;i--){
        sum+=array[i]; 
        if(sum==res){
            startIndex=i; 
            break; 
        }
    }
    //print the subarray with the minimum sum
    cout<<"min sum  subarray "<<endl; 
    for(int i=startIndex;i<=endIndex;i++){
        cout<<array[i]<<" "; 
    }
    cout<<endl; 
    return res;
}
int main(){ 
    vector<int>array={8,-4,3,-5,4}; 
    cout<<minSubArraySum(array)<<endl; 
}