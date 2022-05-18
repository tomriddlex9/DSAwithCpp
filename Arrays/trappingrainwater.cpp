#include<bits/stdc++.h>
using namespace std;

// this solution takes theta(n) time complexity 
// and has a theta(2*n) space complexity for the two arrays lmax and rmax 


// here we are precomputing the lmax and rmax in advance to bring down the complexity from 
// O(n*n) to theta(n)
int trappingRainWater(vector<int>array){
    int n{(int)array.size()}; 
    vector<int>lmax(n); 
    vector<int>rmax(n);
    int result{0}; 
    // since the left and right bars wont hold anything
    lmax[0]=array[0],rmax[n-1]=array[n-1];
    //calculating the left max for each array element 
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],array[i]); 
    }
    //pre-computing the right max for each array element 
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],array[i]); 
    }
    //for each element the amount of water it can store is the 
    // minimum of rmax and lmax and then removing the already occupied 
    //blocks at that position 
    for(int i=1;i<n-1;i++){
        result+=(min(lmax[i],rmax[i])-array[i]);
    }
    return result;
}
int main(){
    vector<int>array={5,0,6,2,3};
    cout<<trappingRainWater(array)<<endl; 
}