#include<iostream>
#include<vector>
using namespace std;
int subsetSum(vector<int>arr,int n,int sum){
    if(n==0) return (sum==0)?1:0; 
    return subsetSum(arr,n-1,sum) + subsetSum(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int n;
    cin>>n; 
    vector<int> arr(n); 
    for(int i=0;i<n;i++)cin>>arr[i]; 
    int sum; 
    cin>>sum; 
    cout<<subsetSum(arr,arr.size(),sum);    
}