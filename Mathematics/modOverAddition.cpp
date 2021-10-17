#include<iostream>
using namespace std; 
const unsigned int M{1000000007};
long long int modOverAddition(long long int a, long long int b)
{
    long long result{((a%M)+(b%M))%M};
    return result; 
}

long long int modOverSubtraction(long long int a, long long int b)
{
    long long result{((a%M)-(b%M))%M};
    return result; 
}

long long int modOverMultiplication(long long int a, long long int b)
{
    long long result{((a%M)*(b%M))%M};
    return result; 
}
int main()
{
    long long int a {1457856355953635621},b{3151635135413512321};
    cout<<"sum over mod M is : "<< modOverAddition(a,b)<< "\n";
    cout<<"subtraction over mod M is : "<< modOverSubtraction(a,b)<< "\n";
    cout<<"multiplication over mod M is : "<< modOverMultiplication(a,b)<< "\n";
    return 0; 
}