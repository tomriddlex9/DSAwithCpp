#include<iostream>
using namespace std;
void subsets(string s,string current,int index){
    if(index==(int)s.length()){  // the base case is if we have reached the last element of the string 
                                // i.e our index is at the last element of the string  
        cout<<"\""<<current<<"\""<<endl;
        return; 
    }
    subsets(s,current,index+1); // here we are not including the element at current index
    subsets(s,current+s[index],index+1); // here we will include the element at current index 
}
int main()
{
    string s; 
    cin>>s; 
    string current=""; 
    int index=0;
    subsets(s,current,index);
}