#include<iostream>
using namespace std;

bool isPalindrome(string &str, int start ,int end){
    if(start>=end) return true;
    //this can also work as a discarding call 
    //as if the string elements are not palindrome at any point in between ,
    // it does not bothers to check any further 
    // since 0 & x = 0  
    return(str[start]==str[end] && isPalindrome(str,start+1,end-1)); 
}
int main()
{
    string s; 
    cin>>s; 
    int start=0; 
    int end=s.size()-1; 
    if(isPalindrome(s,start,end)) cout<<"Palindrome String"<<endl; 
    else cout<<"Not Palindrome"; 
    
}