#include <iostream>
using namespace std;
int main()
{
    // references and pointer referencing being the same thing
    int i = 15;
    // this is a reference to i
    int &j = i;
    // this is a pointer to the location of i
    int *p = &i;
    // referencing using pointer and reference variable
    cout << (&p) << " " << j << endl;
    if ((*p) == j)
        cout << "both are same" << endl;
    int m = (int)NULL;
    int &k = m;
    cout << &m << " " << &k << endl;
    cout << m << " " << k << endl;
}