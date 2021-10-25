#include<iostream> 
#include<algorithm> 
#include<random>
#define ARRAY_MAXSIZE 100
using namespace std; 
int main(int argc, char const *argv[])
{
    srand(time(0)); 
    int array[20];
    for(int x{0};x<20;x++)array[x]=rand()%100;  
    cout<<"The unsorted array is : \n";
    for(auto &x:array) cout<<x<<" ";
    cout<<endl; 
    sort(begin(array),end(array)); 
    cout<<"The sorted array is : \n";
    for(auto &x:array)cout<<x<<" ";
    cout<<endl;    
    return 0;
}