#include<iostream>
#include<vector> 
using namespace std;
vector<int>leadersInArray(vector<int>array){
    vector<int>temp;
    int n{(int)array.size()}; 
    // last array element will always be the leader 
    temp.push_back(array[n-1]); 
    int currentLeader{array[n-1]}; 
    for(int i=n-1;i>=0;i--){
            if(array[i]>currentLeader){
                currentLeader=array[i]; 
                temp.push_back(currentLeader); 
            }
    }
    return temp; 
}
void swap(int &a ,int &b){
    int temp{a}; 
    a=b; 
    b=temp; 
}
void reverse(vector<int>&array){
    int start{0},end{(int)array.size()-1}; 
    while(start<end){
        swap(array[start++],array[end--]);
    }
}
int main()
{
    vector<int>array={7,10,4,10,6,5,2}; 
    vector<int>answer{leadersInArray(array)};
    for(int i=answer.size()-1;i>=0;i--){
        cout<<answer[i]<<" "; 
    } 
    cout<<endl;
    // reverse the answer array to print the elements 
    // in the same order as they are in the array
  //  reverse(answer); 
   // for(int i:answer){ 
   //     cout<<i<<" ";
    //}
    //cout<<endl;
}