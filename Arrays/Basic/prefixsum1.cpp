/* given a fixed array and multiple queries of following
types on the array, how to efficiently perform 
these queries */ 

//solution : using the prefix sum technique 

#include<iostream> 
#include<vector> 
using namespace std;
vector<int>prefixarray; 
void createprefixarray(vector<int>array){
    int temp{0}; 
    for(int i=0;i<(int)array.size();i++){
        temp+=array[i];
        prefixarray.push_back(temp);    
    }
}
void printPrefixArray(vector<int>array){
    createprefixarray(array);
    for(int x:prefixarray){
        cout<<x<<" ";
    }
    cout<<endl; 
}
int getsum(int start,int end){
    if(start==0) return prefixarray[end]; 
     return (prefixarray[end]-prefixarray[start-1]);    
}
int main(){ 
    vector<int> array={2,8,3,9,6,5,4}; 
    printPrefixArray(array); 
    cout<<getsum(0,2)<<endl;
    cout<<getsum(1,3)<<endl;
    cout<<getsum(2,6)<<endl;
}