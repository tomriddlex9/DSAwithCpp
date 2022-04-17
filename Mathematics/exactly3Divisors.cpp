#include<iostream>
#include<cmath>
using namespace std;
// count the total numbers that have only three divisors
// so a number if prime has only two divisors 1 and the number itself 
// for it to have three divisors , the third divisor has to be equal to the fourth 
// since the divisors only appears in pairs
// so we have to find all the numbers that are squares of prime numbers



// function that checks whether a given number is prime or not 
    bool isPrime(int x){
       
       if(x == 1){
           return false;
       }
       
       if(x == 2 || x == 3){
           return true;
       }
       
       if(x%2 == 0 || x%3 == 0){
           return false;
       }
       
       for(int i=5;i<=sqrt(x);i++){
           if(x%i == 0 || x%(i+2) == 0){
               return false;
           }
       }
       
       return true;
   }
   
   int exactly3Divisors(int N)
   {
       
       int count=0,perfect_sq = 1,i=3;
       // 1 4 9 16 
       while(perfect_sq <= N){
           if(isPrime(sqrt(perfect_sq))){
               count++;
           }

           perfect_sq += i;
           i += 2; //  
       }
       
       return count;
       
   }
int main()
{
    int n; 
    cin>>n; 
    cout<<exactly3Divisors(n)<<endl;
}