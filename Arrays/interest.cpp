#include<iostream>
using namespace std;

// principal 10Lac 
// interest rate = 0.675 





int main()
{
    double principal=1000000; 
    // 4double rate=6.75;
    double interest; 
    double totalPayed=0;
    double amountPayed=138000;
    for(int i=1;i<=10;i++){
        cout<<"Year "<<i<<endl; 
        cout<<"------------"<<endl; 
        cout<<"Principal = "<<principal<<endl; 
        interest=0.0675*principal;
        cout<<"Total Payed= 138000"<<endl;
        totalPayed+=interest;
        cout<<"Interest for year = "<<interest<<" "<<endl; 
        principal-=interest;
        cout<<"------------------------"<<endl;     
    }
    cout<<"Total Payed ="<<totalPayed<<endl; 
}