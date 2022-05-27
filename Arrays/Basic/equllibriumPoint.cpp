#include<iostream> 
#include<vector> 
using namespace std;
bool equilExist(vector<int>array){
    int n{(int)array.size()}; 
    int arraysum{0}; 
    for(int x:array) arraysum+=x; 
    int leftSum{0}; 
    for(int i=0;i<n;i++){
        if(arraysum-array[i]==leftSum) return true; 
        leftSum+=array[i]; 
        arraysum-=array[i];
    }
    return false;
}

int main(){ 
    vector<int> array={3,4,8,-9,20,6}; 
    equilExist(array)?cout<<"exist":cout<<"does not exist";
    cout<<endl;
}  
