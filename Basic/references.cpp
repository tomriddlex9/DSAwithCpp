#include<iostream> 
using namespace std; 
int main(){ 
    int i{5};
    int &j=i; 
    cout<<"i= "<<i<<" j= "<<j<<"\n";
    cout<<"&i= "<<&i<<" &j= "<<&j<<"\n";
    int &k{j};
    cout<<"k= "<<k<<"  &k= "<<&k<<endl;
    if((&j)==(&i)) cout<<"Ghost \n";
    const int& l= 5; 
    const int& m{j+k}; 
    cout<<l<<" "<<m<<endl;
    cout<<"&l = "<<&l<<" m= "<<&m<<endl;
    // now using the referencing and dereferencing operators to get the value stored at a reference 

    cout<<"j="<<*(&j)<<"\n";
}