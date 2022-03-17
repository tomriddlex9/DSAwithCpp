#include<iostream>
using namespace std;
// function to count total number of set bits upto number n 
int countSetBits(int n){
    // edge case 
       if(n == 0) return (0);
       // 
       int x = largestPowerOfxUpton(n);
       int bitstill2x = (1 << (x-1)) * x;
       int msb2xton = n - (1 << x) + 1;
       int rest = n - (1 << x);
       int bits = bitstill2x + msb2xton + countSetBits(rest); 
   }
   //get the largest power of 2 which is less than or equal to the given number 
   int largestPowerOfxUpton(int n){
       int x = 0;
       //shift the set bit until the number is smaller or equal to n 
       // for example , if n=35 , then we should get 32
       // or if n=1023 then we should get 512 
       while((1<<x) <= n){
           x++;
       }
       // return highest power -1 , thus all bits are set , so for 35 , return 31 = 00001111
       return (x-1);
   }
int main()
{
    int n; 
    cin>>n; 
    cout<<countSetBits(n)<<endl;
}