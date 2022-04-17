//given a rope of length "n" and three lengths a,b,c which are <=n
// the task is to cut the rope into maximum possible pieces 
// and give the number of maximum pieces that the rope can be cut into 
// for n=5 , a=2, b=1,n=5



//// TC(n)=(3^n) 

#include<iostream>
#include<vector> 
using namespace std;
int ropeCutting(int n,int a,int b,int c){
    // if we have completely cut the rope 
    // this is our base case 
    if(n==0)return 0; 
    // if it is not possible to cut the rope into a given 
    // length then it is impossible thus -1 
    if(n<0) return -1; 
    // else for each piece of rope that is left , try cutting the rope using any of the 
    // given three sizes and find the size which returns maximum cuts 
    int res = max(ropeCutting(n-a,a,b,c),max(ropeCutting(n-b,a,b,c),ropeCutting(n-c,a,b,c)));
    if(res==-1 )return -1; 
    return res+1;   
}
int main()
{
    int n=5,a=2,b=3,c=5; 
    // rope can be cut into piece of length 2 and 3 
    //cin>>n; 
    //cin>>a>>b>>c; 
    cout<<"Maximum number of pieces that the rope can be cut into is : "<<endl; 
    cout<<ropeCutting(n,a,b,c); 
    cout<<endl; 
}