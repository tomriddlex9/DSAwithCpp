#include <iostream> 
#include <algorithm> 
// function to write the solution for the given question 
// this gives better modularity to the program and makes it easier to understand 
int solution()
{ 
    // write the main solution here 

    return 1; 
}
using namespace std; 
int main()
{
    //creating variable
    int x; 
    //multiple variable of the same type 
    int y,z; 
    //variable initialisation on creation 
    int width{10};
    cout<<"old width "<< width; 
    //assigning new values to the variable 
    width= 43;
    cout<<"\nnew width "<< width; 

    //different types of list initialization
    int hex { 5 }; // direct list initialization of value 5 into variable width (preferred)
    int height = { 6 }; // copy list initialization of value 6 into variable height
    int depth {}; 
    
    // this is a single line comment 
    // * its a better practise to write the comment before the statement 
    // that the comment is describing 

    // variable to take in the testcases 
    int tc ;
    cin>>tc; 
    // iterate untill all the testcases are completed 
    while(tc--)
    { 
        solution(); 
    }
    
    // return 0 to tell that the program compiled successfully 
    return 0; 

}