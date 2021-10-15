#include <iostream> 
#include "template.h"
auto  add(uint16_t a, uint32_t b)
{
    uint32_t temp; 
    temp=static_cast<uint32_t>(a); 
    return a+b; 
}
void countDown(int count)
{
    std::cout<<"push "<<count<<"\n";
    if(count>1)countDown(count-1);
    std::cout<<"pop"<< count << "\n";
}
int main()
{
    countDown(5);
    std::cout<<maximum<int>(12,3);
    std::cout<<"\nadd 3 and 5 : " <<add(3,5)<<'\n'; 
    return 0; 
}
