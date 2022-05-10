#include<iostream>
using namespace std;
int functionReturnByValue(int &x){
    cout<<"x= "<<x << ", &x= "<<&x<<endl; 
    return x; 
    // here it actually returns a temporary copy of the value of x 
    // with a different address 
}
int& functionReturnByReference(int &x){
    cout<<"x= "<<x << ", &x= "<<&x<<endl; 
    return x; 
    // here it actually returns the parameter that was passed to it 
    // which means that the value and address both are same 
}
int functionTry(int &x){
    cout<<"x= "<<x << ", &x= "<<&x<<endl; 
    return x;
    
}
int main()
{
    int a{10}; 
    cout<<"a= "<<a << ", &a= "<<&a<<endl; 
    const int&b= functionReturnByValue(a);
    int& c= functionReturnByReference(a); 
    const int&d=functionTry(a); 

    cout<<"b= "<<b << ", &b= "<<&b<<endl; 
    cout<<"c= "<<c << ", &c= "<<&c<<endl; 
    cout<<"d= "<<d << ", &d= "<<&d<<endl; 

}