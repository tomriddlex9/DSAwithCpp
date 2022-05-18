#include<iostream> 
#include<vector> 
using namespace std; 
int countOnes(vector<int>array){
    int currCounter{0}; 
    int maxCounter{0}; 
    for(int x:array){
        //if the string is binary then check if x==0 
        // else it is more robust to check if x!=1 as that will 
        // always give correct result, even for non binary strings 
        if(x!=1) currCounter=0; 
        else if(x==1){
            currCounter++;
            maxCounter=max(currCounter,maxCounter); 
        }
    }
    return maxCounter;
}
int main(){
    vector<int>array={1,0,1,1,1,0,0,0,1,1,0,1,1,1,1,1}; 
    cout<<countOnes(array)<<endl; 
}