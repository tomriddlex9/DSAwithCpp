// Maximum Sum Circular Subarray 

// The task is to find maximum circular sum subarray of a given array. 

// O(n^2) approach is to generate all possible subarrays of the given array 
// and find the maximum sum out of them all 

#include<iostream> 
#include<vector>
using namespace std; 
int maxSumSubArray(vector<int>array){
    int res{0};
    int currmax{0}; 
    for(int i=0;i<(int)array.size();i++){
        currmax=max(currmax+array[i],array[i]); 
        res=max(res,currmax); 
    }
   // cout<<"maxsum: "<<res<<endl; 
    return res; 
}
int minSumSubArray(vector<int>array){
    int res{0}; 
    int currsum{0}; 
    for(int i=0;i<(int)array.size();i++){
        currsum=min(currsum+array[i],array[i]); 
        res=min(res,currsum); 
    }
   // cout<<"minsum : "<<res<<endl;
    return res;

}
int maxSumCircularSubArray(vector<int>array){
    int maxSumFromNormal{maxSumSubArray(array)}; 
    int totalSum{0}; 
    for(int x:array){totalSum+=x;}
//    cout<<"totalsum: "<< totalSum<<endl;
    int maxSumFromCircular{totalSum-(minSumSubArray(array))}; 
    return (max(maxSumFromNormal,maxSumFromCircular)); 
}
int main(){
    vector<int>array={8,-4,3,-5,4}; 
    cout<<maxSumCircularSubArray(array)<<endl;
}