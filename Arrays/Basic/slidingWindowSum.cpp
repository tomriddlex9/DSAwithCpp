// given an unsorted array of non-negative integers . Find if there is a subarray with given sum 
#include<iostream> 
#include<vector> 
using namespace std; 
bool slidingSumExists(vector<int>array,int sum){
 int currsum{0};
 int start{0}; 
 int n{(int)array.size()}; 
 int end{0}; 
 while(end!=n || start!=n){
     if(currsum<sum)
     {
         currsum+=array[end];
         if(currsum==sum) return true; 
         end++;
     } 
     else if(currsum>sum) {
         currsum-=array[start++]; 
     }
     else return true;
     cout<<currsum<<endl;
 }
 return (currsum==sum);
}
int main(){ 
    vector<int>array={1,4,20,3,10,5,6};
    int sum; 
    cin>>sum; 
    slidingSumExists(array,sum) ? cout<<"sum exists" : cout<<"does not exists"; 
    cout<<endl; 
}