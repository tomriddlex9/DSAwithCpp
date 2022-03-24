#include<iostream>
using namespace std;
int MMI(int a,int m){
    int ans=-1;
    for(int i=1;i<m;i++){
        if((a*i)%m==1){
            ans=i; 
            break; 
        }  
    }


    return ans;

  //  17*7=119 
  //  12*10=120
}
int main()
{
    int a,m; 
    cin>>a>>m; 
    cout<<MMI(a,m); 
}