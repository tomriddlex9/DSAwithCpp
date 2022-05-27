#include<iostream> 
#include<vector>
using namespace std; 
void evenOddPositions(vector<int>&arr){
    int oddPointer{1} ;
    int n=(int)arr.size(); 
        int evenPointer{0};
        for(int i=0;i<n;i++){
            if((arr[i]&1)==0 && (i&1)==0) evenPointer+=2; 
            if((arr[i]&1)==0 && (i&1)!=0) {
                swap(arr[i],arr[oddPointer+=2]);
            }
            if((arr[i]&1)!=0 && (i&1)!=0){
                oddPointer+=2; 
            }
            if((arr[i]&1)!=0 && (i&1)==0){
                swap(arr[i],arr[evenPointer+=2]);
            }
        }
}
int main(){ 
    vector<int>array={3,6,12,1,5,8}; 
    evenOddPositions(array); 
    for(int i:array) cout<<i<<" "; 
    cout<<endl;
}