#include<iostream>
using namespace std;
int countBitsFlip(int a,int b){
    int counter{0}; //initialise the bit counter 
    while(a!=0 || b!=0 ){ // untill both of them become zero , i.e both have no set bit 
        if(((a&1)^(b&1) )== 1) { // if the LSB of both number are different 
                                // then increment the counter 
            counter++; 
        }
        // shift the LSB for both the numbers 
        a=a>>1; 
        b=b>>1;
    }
    // return total bits to be flipped 
    return counter; 
}
int main()
{
    int a,b; 
    cin>>a>>b; 
    cout<<countBitsFlip(a,b)<<endl;
}