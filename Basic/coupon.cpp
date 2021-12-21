#include<iostream>
using namespace std; 
int totalWays(int n, int initial,int x)
{
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
 
    int count = 0;
    for ( int initial; initial <= x; initial++) {
        count += totalWays(n - x, initial,x);
    }
 
    return count;
}
int main()
{ 
    int n {}, initial{},x{};
    cin>>n>>initial>>x; 
    cout<<totalWays(n,initial,x);
} 
