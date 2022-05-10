#include<iostream>
#include<vector>
using namespace std;
//takes the array , pushes all non-zero values in-place in a temp array 
// and counts the number of zeroes and adds those many at the end of temp array 

// extra space = O(n)   time complexity=O(n)
void swap(int &a,int &b){
    int temp{a};
    a=b;b=temp; 
}
vector<int>zeroesToEnd(vector<int>array){
    vector<int>temp; 
    int zeroCounter{0};
    for(int i=0;i<(int)array.size();i++){
        if(array[i]==0) zeroCounter++; 
        else{ 
            temp.push_back(array[i]); 
        }
    } 
    for(int i=0;i<zeroCounter;i++){temp.push_back(0);} 
    return temp; 
}


// how to do this inplace without extra space in the same array that was passed 
// keep a counter for non-zero elements and swap every non zero element with 
// the element at the index count
void zeroesToEndEfficient(vector<int>&array){
    int counter{0}; 
    for(int i=0;i<array.size();i++){
        if(array[i]!=0){
            swap(array[i],array[counter++]); 
        }
    }
}
int main()
{
    vector<int>array={1,0,2,3,0,0,0,5,0,6,0,4,0,0,0}; 
    cout<<"arraysize== " <<array.size()<<endl; 
    vector<int>answer{zeroesToEnd(array)}; 
    for(int i:answer){
        cout<<i<<" "; 
    }  
    cout<<endl; 
    vector<int>array2={1,0,2,3,0,0,0,5,0,6,0,4,0,0,0}; 
    zeroesToEndEfficient(array2); 
    for(int i:answer){
        cout<<i<<" ";
    }
    cout<<endl; 
}