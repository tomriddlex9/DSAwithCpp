#include<iostream> 
using namespace std; 
void leadersInArray(int array[],int n){
    int currentLeader{array[n-1]};
    cout<<currentLeader<<" ";
    for(int i=n-1;i>0;i--){
        if(array[i]>currentLeader){
            currentLeader=array[i];
            cout<<currentLeader<<" "; 
        } 
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    int array[]={16,17,4,3,5,2}; 
    //int n=sizeof(array)/sizeof(array[0]);
    int n=6;
    leadersInArray(array,n); 
    return 0;
}
