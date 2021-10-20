#include <iostream> 
using namespace std; 
int main()
{ 
    enum Numbers
    {
        zero,one,two,three,four,five,six,seven,eight,nine
    };
    Numbers number {five}; 
    cout<< "The input number is : "<<number;  
    //string inputStringNum{}; 
    //cin>>inputStringNum; 
    int inputIntNum{};
    cin>>inputIntNum;
    Numbers inputStringNum{static_cast<Numbers>(inputIntNum)};  
    switch (inputIntNum)
    {
        case 1: {cout<<"one";break;} 
        case 2: {cout<<"two";break;} 
        case 3: {cout<<"three";break;}
        case 4 : {cout<<"four";break;}
        case 5 :
        case 6 :
        case 7 :
        case 8 : 
        case 9 : { cout<<"greater than five "; break ; } 
        default : cout<<"zero";
        
    }
}
