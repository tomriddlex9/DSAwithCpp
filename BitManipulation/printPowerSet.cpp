#include<iostream>
#include<string> 
#include<cmath> 
using namespace std;
void printPowerSet(string s,int size){
    int powerSet= (int)pow(2,size); 
    // we have to print 2^n elements 
    for(int index=0;index<powerSet;index++){
        cout<<"\"";
       for(int j=0;j<size;j++){
           if((index & (1<<j))!=0)
                cout<<s[j];
       }        cout<<"\" ,";
        }

        cout<<endl; 
    }
int main()
{
    string s; 
    cin>>s; 
    int n=(int)s.size(); 
    printPowerSet(s,n); 
}