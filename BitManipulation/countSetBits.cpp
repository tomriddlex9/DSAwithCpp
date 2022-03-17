#include<bits/stdc++.h>
using namespace std;
// naive approach is to right shift all the bits one by one until zero 
// and check if the bit is set or not , if set then increment else continue 
// time complexity = O(total set bits)
int countSetBits(int n){
   int counter{0}; 
   while(n!=0){
      if(n&1) counter++; 
      n=n>>1;
   }
   return counter;
}
int main()
{
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