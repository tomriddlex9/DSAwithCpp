#include<bits/stdc++.h>
using namespace std;
// program to find the only two odd appearing number in a given array 
// of numbers 
void twoOddOccuring(int arr[],int size){
    // store the Xor values for all numbers,group1 and group2 
    int Xor=0,res1=0,res2=0; 
    // find the xor value of all the array ,which shoudl result in the
    // xor equivalent of the only two odd appearing numbers 
    for(int i=0;i<size;i++) Xor^=arr[i];
    // sn here is used to find the rightmost set bit of the xor value 
    // since the last set bit means that of the two odd numbers 
    // both had a opposite bit on that bit number 
    // so we will have two group of numbers that have the bit set or unset at that position
    int sn= Xor & ~(Xor-1);
    // again traverse the array and xor the values of the two groups 
    for(int i=0;i<size;i++){
        // if the bit is not set , then it is group1 and xor its values
        if((arr[i]&sn)!=0) 
            res1^=arr[i];
        // else if the bit is set , it it group2 and we xor its values 
        else 
            res2^=arr[i]; 
        // we know that each group will have only one odd occuring number , which can thus be obtained by 
        // doing a xor operation on all the elements 
        // the odd occuring element from group1 is stored in res1 and from group2 in res2 
    }
    cout<<res1<<" "<<res2<<endl;
}   
int main(){ 
    int arr[]={3,4,3,4,5,4,4,6,7,7};
    int arr2[]={3,4,3,4,8,4,4,32,7,7};
    int size= 10; 
    twoOddOccuring(arr,size); 
    twoOddOccuring(arr2,size);
}