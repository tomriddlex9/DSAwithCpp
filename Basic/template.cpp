#include <iostream> 
using namespace std; 
template <typename T>
T maximum(T x ,T y )
{
    return(x>y)?x:y; 
}
int main()
{
    int a{},b{};
    double x{},y{};
    cout<<"Enter int : " ;
    cin>>a>>b;
    cout<<"\nmax is : "<< maximum<>(a,b)<<'\n';
    cout<<"Enter double : ";
    cin>>x>>y;
    cout<<"\n max is : "<<maximum<double>(x,y)<<'\n';
    return 0;
    
    
}