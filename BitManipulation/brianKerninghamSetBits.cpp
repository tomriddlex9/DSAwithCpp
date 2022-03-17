// the brian - Kerningham Algorithm here is used to count the total number of set bits 
// for a given number 
// for ex . 5 - 00000101 . So output is 3 
// the brian kerningham algorithm is an optimization over the naive solution 
// and takes complexity from O(total bits in N ) to O(total set bits in N )
#include<bits/stdc++.h>
using namespace std; 
int countSetBits(int n){
    int counter{0}; 
    // this algorithm removes the last set bit from the number 
    // and thus only the ( number of set bits ) steps are performed 
    // 11100 & (11011) = 11000
    // 11000 & (10111) = 10000
    // 10000 & (01111) = 00000
    while(n){
        n=(n&(n-1));
        counter++; 
    }
    return counter;
}
int main(){
   int n; 
   cin>>n;
   bitset<8>b8(n);
   bitset<16>b16(n); 
   bitset<32>b32(n);
   cout<<"Binary of "<<n<<" is " <<b8<<endl;
   cout<<"Binary of "<<n<<" is " <<b16<<endl;
   cout<<"Binary of "<<n<<" is " <<b32<<endl;
   cout<<countSetBits(n)<<endl;
   return 0;
}