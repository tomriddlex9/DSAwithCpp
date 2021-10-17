#include<iostream> 
using namespace std; 
int main()
{
    
    int a[4][5]= {
              {2,3,4,5,6},
              {4,5,6,8,7},
              {5,6,5,-1,5},
              {5,6,7,7,8},
             };
    for(int i{0};i<4;i++)
    {
        for(int j{0};j<5;j++)cout<<a[i][j]<<"  ";
        cout<<"\n";
    }
    return 0; 
}