// program to find all the number of set bits 
// for numbers 1 to n , given the number "n" as the input 
// for example , n=5 =101 , so count total set bits in 
// 1,10,11,100,101


#include<iostream>
using namespace std;
int countSetBits(int n){
    int counter{0};
    while(n){
        if(n&1) counter++ ;
        n=n&(n-1);
    }
    return counter; 
}
int main()
{
   int n ; 
   cin>>n;
   int totalCount=0; 
   for(int i=1;i<=n;i++){
       totalCount+=countSetBits(n);
   }
   cout<<totalCount<<endl;
}