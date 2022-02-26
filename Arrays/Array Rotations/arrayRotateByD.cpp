#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

// time complexity { t(n)=O(n) }
// space complexity = input space + O(d) which is the size of temp array



void rotateArrayByD(int array[],int n,int d)
{
    int temparray[d];
    // put the first d elements of the array to put in the end
    for(int i=0;i<d;i++){
        temparray[i]=array[i];
    }
    // shift elements from d-1 index by d positions
    for(int i=d;i<n;i++){
        array[i-d]=array[i];
    }
    for(int i=0;i<d;i++){
        array[(n-d)+i]=temparray[i];
    }
}

void rotateArraybyJuggling(int array[0],int n,int d)
{
    for(int i=0;i<n;i++)
}








int main()
{
    int n,d;
    srand(time(0));
    // input is the array size and number of element
    // to rotate the array by  
    cin>>n>>d; 
    int array[n];
    // fill array by random elements 
    for(int i{0};i<n;i++){
        array[i]=rand()%10; 
    }
    cout<<"initial array is :"<<endl;
    for(int x:array)
    {
        cout<< x <<" "; 
    }
    cout<<endl; 
    rotateArrayByD(array,n,d);
    cout<<"Array after rotation is: "<<endl; 
    for(int x:array){
        cout<< x <<" ";
    }
    cout<<endl; 
    
}