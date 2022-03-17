// Given a number N. Find the length of the longest consecutive 1s
// in its binary representation.
#include<iostream>
using namespace std;
int maxConsecutiveOnes(int n){
    int maxCounter{0};
    int currentCounter{0};
    int prevBit{0},currentBit;   
    while(n!=0){
        currentBit=n&1; 
        if(prevBit==0 && currentBit==1){
            currentCounter=1; 
            maxCounter=max(maxCounter,currentCounter);
        }
        if(prevBit==1 && currentBit==1){
            currentCounter++; 
            maxCounter=max(maxCounter,currentCounter);
        }
        prevBit=currentBit; 
        n=n>>1;
    }
    return maxCounter;
}
int main()
{
    int n; 
    cin>>n; 
    cout<<maxConsecutiveOnes(n)<<endl; 
}