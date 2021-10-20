#include <iostream> 
using namespace std;
struct Employee 
{
    int id{}; 
    int age{}; 
    int salary{};
} e1,e2; 
void printInfo(Employee e)
{
    cout<<"Employee Id : "<<e.id<<"\n";
    cout<<"Employee Age : "<<e.age<<"\n";
    cout<<"Employee salary : "<< e.salary<<"\n";
    cout<<"------------------------------------\n";
}
int main()
{
    Employee e3{3,43,4000};
    e1.id={1};
    e1.age={23};
    e1.salary={9000};
    e2={2,45,6000};
    cout<<"The information about Employees are :\n";
    cout<<"-------------------------------\n";
    printInfo(e1);
    printInfo(e2);
    printInfo(e3);
    return 0;
}