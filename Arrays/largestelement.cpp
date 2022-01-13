#include <iostream>
#include <ctime> 
using namespace std; 
int main(int argc, char const *argv[])
{
    srand(time(0));
    int n,max=-1; 
    cout<<"Array size : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++) {
        array[i]=rand()%100;
        if(max<array[i]) {
            max=array[i];
        }
    }
    cout<<"\nthe array is :\n";
    for(int x:array){
        cout<<x<<" ";
    }
    cout<<"\nThe maximum element is : "<<max<<endl; 
    
    return 0;
}
