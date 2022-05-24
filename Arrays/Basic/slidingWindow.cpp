#include<iostream>
#include<vector> 
using namespace std; 
int maxKconsSum(vector<int>array,int k){
    int maxSum{0},sum{0};
    int n{(int)array.size()}; 
    // if the size of k is greater than number of elements in array 
    if(k>n) return -1; 
    // pre calculate the sum of first k elements 
    for(int i=0;i<k;i++){
        sum+=array[i]; 
    }
    // now modify the sum as per the strategy of sliding window and keep a counter of the 
    // max value 
    cout<<sum<<endl;
    maxSum=sum; 
    for(int i=1;i<n-k+1;i++){
        cout<<"pass "<<i<<endl;  
        sum=(sum-array[i-1]+array[i+k-1]); 
        cout<<"sum = "<<sum<<endl;
        maxSum=max(maxSum,sum); 
    }
    return maxSum;
}
int main(){ 
    vector<int>array={1,8,30,-5,20,7}; 
    int k{0}; 
    cin>>k; 
    cout<<maxKconsSum(array,k)<<endl;    
}