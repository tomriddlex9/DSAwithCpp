#include<iostream>
#include<cmath>
using namespace std;
void quadraticRoots(int a,int b,int c){
    // -b +- sqrt(b^2 - 4*a*c ) / 2 *a 
    double temp = (sqrt(pow(b,2)-(4*a*c)) ) ; 
    cout<< (-1 * b + temp) / (2*a)<< "  "<< (-1 * b - temp)/ (2*a); 
}
int main()
{
    int a,b,c; 
    cin>>a>>b>>c; 
    quadraticRoots(a,b,c);
}