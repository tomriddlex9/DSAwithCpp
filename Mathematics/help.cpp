#include<iostream>
#include<cstdlib>
using namespace std; 
int energyChecker(int energy[], int n)
{
    int initialEnergy{1};
    int total{1;
    cout<<"\n";
    for(int i{0};i<n;i++)
    {
     total=total+energy[i];
     cout<<total<<" ";
     if(total<0){initialEnergy+=abs(total)+1;}
     if(total=0){initialEnergy+=abs(total);}
    }
    return initialEnergy; 
}
int solution(int n,int energy[])
{   // initial energy that the player has
    int initial=1;  
    // energy of the player at any given point
    int total=1;
    // iterate over the checkpoints 
    for(int i{0};i<n;i++)
    {
        // if the checkpoint is positive , simply increase total energy 
        if(energy[i]>0) total+=energy[i];
        // if the total energy at any given point goes less than  or equal to zero 
        // than simply increase the initial energy by abs(total)+1 to get it more than zero 
        if(total<=0) initial=initial+abs(total)+1;
        //if the checkpoint is negative than 
        if(energy[i]<0) 
        {
            total=total+energy[i];
        } 
        cout<<total<<" ";
    }
    cout<<"\n";
    return initial; 
   
} 
int main()
{
    int n{};
    cin>>n;
    int energy[n];
    for(int i{0};i<n;i++)cin>>energy[i];
    cout<<solution(n,energy);
    cout<<"\n"<<energyChecker(energy,n);
    return 0;
}