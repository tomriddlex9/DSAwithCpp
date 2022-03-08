// time complexity of the optimised sieve of Eratosthenes 
// O(nloglogn) which is far better than the complexity of Naive solution as (n*sqrt(n))
#include<iostream> 
#include<vector>
using namespace std; 
void sieve(int n){
    // create a boolean array and set all values to true initially 
    vector<bool> isPrime(n+1,true); 
    // finding all multiples of prime numbers greater than and equal to two 
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            // print the prime value 
            cout<<i<<" "; 
            // set all the multiples of the prime number as false
            for(int j=i*i;j<=n;j=j+i)
                isPrime[j]=false;
        }
    }
    cout<<endl;
}
int main(){ 
    int n;
    cin>>n; 
    sieve(n);
}