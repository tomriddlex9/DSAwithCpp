#include <iostream>
#include <ctime> 
#include <vector>
using namespace std;
template <size_t N> 
vector<int> maxAndSecond(int (&arr)[N]){
    int max=0,max2=-1; 
    for(auto x:arr){
        if (x>max)max=x;
    } 
     for(auto x:arr){
        if(x<max && x>max2) max2=x; 
    }
        vector<int>result{max,max2};
        return result; 
}
int main()
{
   srand(int(time(0)));
   int array[10],sum{0};
   for(int i{0};i<10;i++){
       array[i]=rand()%100; 
   } 
   cout<<"The array is : ";
   for(int x:array){
       cout<<x<<" "; 
       sum+=x;
   }
   cout<<"\nThe sum of the array is : "<<sum<<endl; 
   cout<<"The largest and the second largest element of the array are : "<<maxAndSecond(array)[0]<<"  "<<maxAndSecond(array)[1]<<endl; 
   return 0;
}