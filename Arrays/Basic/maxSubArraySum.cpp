#include<iostream> 
#include<vector> 
using namespace std;
//efficient solution to find out the maximum possible sum of any of the 
//continuous subarrays of a given array and print that subarray with the sum 

//the time complexity of the following solution is O(n) and takes O(1) extra space
int maxSubArraySum(vector<int>array){
    int res{array[0]};
    int endIndex{0}; 
    int currmax{array[0]}; 
    for(int i=0;i<array.size();i++){
        currmax=max(currmax+array[i],array[i]);
        if(currmax>res){ 
            res=currmax; 
            endIndex=i; 
        } 
    }
    int sum{0}; 
    int startIndex{0}; 
    for(int i=endIndex;i>=0;i--){
        sum+=array[i]; 
        if(sum==res){
            startIndex=i; 
            break; 
        }
    }
    for(int i=startIndex;i<=endIndex;i++){
        cout<<array[i]<<" "; 
    }
    cout<<endl; 
    return res; 
}
int main(){
    vector<int>array={-5,1,-2,3,-1,2,-2};
    vector<int>array2={8,-4,3,-5,4}; 
    cout<<maxSubArraySum(array)<<endl; 
    
}