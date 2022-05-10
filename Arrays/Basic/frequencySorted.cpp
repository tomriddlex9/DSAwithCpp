// count the frequency of all the numbers in a given sorted array 

#include<bits/stdc++.h>
using namespace std;
void frequencyCounter(vector<int>array){
    int currVal=array[0]; 
    int counter{1}; 
    for(int i=1;i<(int)array.size();i++){
        if(currVal!=array[i]){
            cout<<currVal<<" "<<counter<<endl; 
            currVal=array[i]; 
            counter=1; 
        }
        else {
            counter++;    
        }
    }
    cout<<currVal<<" "<<counter<<endl;
}
int main()
{
    vector<int>array={10,10,10,25,32,32,45,45,45,45};
    frequencyCounter(array);     
}