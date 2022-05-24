#include<iostream> 
#include<vector>
#define PI 3.141592653589
using namespace std; 
int main(){ 
    int r,a,b; 
    cin>>r>>a>>b; 
    int rad=1;
    vector<int>radius;
    radius.push_back(rad); 
    while(1){
        rad*=a; 
        radius.push_back(rad); 
        if(rad<b) {break;}
        else {
            rad/=b; 
            radius.push_back(rad);
        }
    }
    for(int i:radius){
        cout<<i<<" "; 
    }
    cout<<endl;
    long double totalarea=0;
    for(int i:radius){
        totalarea+=PI*i*i; 
    }
    cout<<totalarea<<endl;
}