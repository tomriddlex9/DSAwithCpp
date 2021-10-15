#include <iostream> 
#include <unistd.h> 
using namespace std; 
int main()
{
    unsigned int second =1000000; 
    srand(time(0));
    while(1) 
    {
        int random{rand()%1000};
        cout<<random<<"\n";
        usleep(second);
    }
    return 0; 
} 