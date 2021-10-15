#include <iostream> 
using namespace std; 
int main()
{
//      int x{}; 
//     //  cin>>x; 
//     //  cout<<"\n You entered : "<<x; 
//      int y ;
//      //since y is uninitialised , it will throw random garbage vakues to the output  
//      cout << y <<"\n";
     int x{ 2 };             // initialize variable x with value 2
     int y{ 2 + 3 };         // initialize variable y with value 5
     
     // the format of the statement is 
     // type identifier {expression}
     int z{ (2 * 3) + 4 };   // initialize variable z with value 10
     int w{ y };             // initialize variable w with value 5 (the current value of variable y) 
     int *pointerTo_y{&y};  
     printf("The adress of y is : %p\n", pointerTo_y);
     printf("\nThe value of x : %d, y : %d and z : %d",x,y,z);
     cout<<"\nthe value of y is : " << *pointerTo_y; 
     cout<<"\nWriting things on multiple "
     "lines is also very easy \n";

     return 0;
}