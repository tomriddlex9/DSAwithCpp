#include<iostream>
using namespace std;
// program to find the index of person who stays alive last 
// in the josephus problem
// the following function is to get the survivor if the 
// person with the sword is 0 and gives us time complexity of theta(n);
int Josephus(int n,int k){
    if(n==1) return 1; 
    return((Josephus(n-1,k)+k-1)%n + 1); 
}
// if the sword is not with the person at the index zero but with some
    // random index , lets say 'x' , then we simple set x as 0 
int main()
{
    int numberOfMen,k; 
    cin>>numberOfMen>>k; 
    cout<<Josephus(numberOfMen,k)<<endl; 
}
