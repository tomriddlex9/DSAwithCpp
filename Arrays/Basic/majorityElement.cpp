// Majority element is an element that appears more than n/2 times in an array of size n.
#include<bits/stdc++.h>
using namespace std; 
int majorityElement(vector<int>array){
    int n{(int)array.size()/2}; 
    unordered_map<int,int> m ;
    for(int x:array) m[x]++; 
    for(auto x:m){
        if(x.second > n) return x.first ; 
    }
    return -1; 
}
int majorityElement2(vector<int>array){
    // first phase of the process 
    // here we create a counter and track index of the element
    // that can be the majority element 
    int counter=1; 
    int n=(int)array.size(); 
    int majIndex=0;
    for(int i=1;i<(int)array.size();i++){
        if(array[i]==array[majIndex]) counter++; 
        else{ 
            counter--; 
            if(counter==0){
                counter=1; 
                majIndex=i; 
            }
        }       
    }
    // phase 2 , verifying if the possible majority element 
    // is actually a majority 
    int majCounter{0}; 
    for(int i:array){ 
        if(i==array[majIndex]) majCounter++; 
    }
    if(majCounter>(n/2)) return array[majIndex]; 
    else return -1; 
} 
int main(){
    vector<int>array={3,7,4,7,7,7,5};
    cout<<majorityElement2(array)<<endl;
    cout<<majorityElement(array)<<endl;  

}