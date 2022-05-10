#include<iostream>
using namespace std;
// c
void FunctionCallByReference(int &,int ) ;// function prototype 
// declaration of a function and its formal parameters and return parameters 
void FunctionCallByAddress(int *,int *); // function prototype 
// here the address of the actual parameters will be passed to the function 
int main()
{
    int a{20};
    cout<<"a= "<<a << ", &a= "<<&a<<endl;
    FunctionCallByReference(a,a); 
    FunctionCallByAddress(&a,&a); 
}
// function definiton with formal parameters 
void FunctionCallByReference(int &b,int c){
 // here b is passed by reference and will get the same value and address as the actual parameter
    cout<<"b= "<<b << ", &b= "<<&b<<endl; 
// whereas c is passed by value and will get a copy of the value of the actual parameters with the value
// stored in a different location 
// &a  !=  &c
    cout<<"c= "<<c << ", &c= "<<&c<<endl; 
}

void FunctionCallByAddress(int *b,int *c){
    // the same value and address will be passed to the function 
    // but the difference is that here the function gets the address of the 
    // actual parameter and not the alias/ reference to the actual parameter 
    // passing reference is much more safer than passind addresses     
    cout<<"b= "<<*b << ", &b= "<<b<<endl; 
    cout<<"c= "<<*c << ", &c= "<<c<<endl; 
}



// ##### Call by address != Call by reference but they are kind of similar 
// in the sense of execution 

