// program to rotate an array of size n by d elements 

/*
 Following are the four functions to be implemented : 
 1.shift one position to the left 
 2.shift one position to the right 
 3.shift "d" position to the left 
 4.shift "d" position to the right 
*/

#include <iostream> 
using namespace std; 
void oneleftRotate(int arr[], int n)
{
    // in left rotate by one , the first element is shifted to the 
    // end of the array and all the elements of array are replaced 
    // with their predecessor index in the array 
    // before : 1 2 3 4 
    // after : 2 3 4 1 
    int temp{arr[0]};
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp; 
}
void onerightRotate(int arr[], int n)
{
    //in right rotate by one , the last element is shifter to 
    // the start of the array and all the elements of the array 
    // are replaced with their successor index in the array
    // before : 1 2 3 4 
    // after : 4 1 2 3 
    int temp{arr[n-1]};
    for(int i=1;i<n-1;i++)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
void leftRotation(int arr[],int n, int d);
void rightRotation(int arr[],int n,int d);
int main()
{
    int arraysize{10};
    int array[arraysize]{0,1,2,3,4,5,6,7,8,9};
    int randArray[arraysize]={342,675,4,87,97,376,57,23,12};
    cout<<"Normal Array"<<endl; 
    for(int x:array)
    {
        cout<<x<<" "; 
    }
    cout<<endl; 
    // calling of functions here 
    // one at a time to see the effect 

    onerightRotate(array,arraysize);

    //*******************************
    for(int x:array)
    {
        cout<<x<<" ";
    }
    cout<<endl; 
    return 0; 
}