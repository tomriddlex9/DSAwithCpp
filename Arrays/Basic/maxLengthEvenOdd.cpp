// Longest Even Odd subarray 

// Find out the length of the longest subarray that has an alternating even odd elements
// I/P : [10,12,14,7,8]
// O/P : 3 

#include<iostream> 
#include<vector> 
using namespace std; 
int maxlengthEvenOdd(vector<int>array){
    //1 for odd and 0 for even 
    bool prev{(bool)(array[0]&1)}; //bool value to store ,if previous element was even or odd 
    bool curr; // boolean to store if the current array element is even or odd 
    int res{1}; // maximum value of alternating elements 
    int counter{1}; // current size of the alternating subarray 
    for(int i=1;i<(int)array.size();i++){
        curr= (array[i] & 1) ; 
        if(prev!=curr){
            counter++; 
        } 
        else counter=1; 
        prev=curr; 
        res=max(res,counter); 
    }
    return res;

}
int main(){ 
    vector<int>array={10,12,14,7,8,6,5,5,4}; 
    vector<int>array2={7,10,13,14}; 
    cout<<maxlengthEvenOdd(array)<<endl; 
    cout<<maxlengthEvenOdd(array2)<<endl; 
}