#include<iostream> 
#include<iterator> 
#include<utility>
#include<array>
using namespace std; 
int main()
{
    //declaration of array
    int array[]{30,4,534,67,478,878,587,92};
    cout<<"The given array is :\n";
    //printing the unsorted array
    for(auto &x:array) cout<< x << " ";
    cout<<"\n";
    //typecasting of the array size to the lenght variable 
    int length{sizeof(array)/sizeof(array[0])};
    //iterating over the array from 0 to length-1
    for(int startIndex{0}; startIndex<length-1;startIndex++)
    {
        //setting the first array value as the smallest index
        int smallestIndex{startIndex};
        // iterating for the remaining array 
        for(int currentIndex{startIndex+1};currentIndex<length;currentIndex++)
        {
            // keeping a check for the smallest index value
            if(array[currentIndex]<array[smallestIndex])
               smallestIndex=currentIndex;       
        }
        // swap the smallest element to the start position of the unsorted array
        swap(array[startIndex],array[smallestIndex]);
    }

    // printing out the sorted array
    cout<<"The sorted array is : \n";
    for(auto &x:array)cout<< x << " ";
    cout<<"\n";
    return 0; 
}