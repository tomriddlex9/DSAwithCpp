#include<bits/stdc++.h>
using namespace std; 
int trappingRainWater(vector<int>array){
    int n{(int)array.size()}; 
    vector<int>lmax(n); 
    vector<int>rmax(n);
    int result{0}; 
    lmax[0]=array[0],rmax[n-1]=array[n-1];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],array[i]); 
    }
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],array[i]); 
    }
    for(int i=1;i<n-1;i++){
        result+=(min(lmax[i],rmax[i])-array[i]);
    }
    return result;
}
int main(){
    vector<int>array={5,0,6,2,3};
    cout<<trappingRainWater(array)<<endl; 
}