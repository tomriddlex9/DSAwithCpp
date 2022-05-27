#include<iostream> 
#include<vector>
using namespace std; 
int linearSearch(vector<int>array,int key){
    for(int i=0;i<(int)array.size();i++){ 
        if(array[i]==key) return i; 
    }
    return -1; 
}
int main(){ 
    vector<int>array={65,3,43,65,46,8,435,4,2,5,76,12,7}; 
    int key; 
    cin>>key; 
    cout<<linearSearch(array,key)<<endl; 
}