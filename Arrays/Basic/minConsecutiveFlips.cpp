#include<iostream> 
#include<vector> 
using namespace std; 
// the time complexity of the following solution is O(n) and takes O(1) extra space 
int minConsecutiveFlips(vector<int>array){
  int go{0},gz{0}; 
  int n=(int) array.size(); 
  if(n==1) return 0; 
  array[0]==0 ? gz++ :go++; 
  for(int i=1;i<n;i++){
      if(array[i-1]!=array[i]){ 
          if(array[i]==0) gz++; 
          else go++; 
      }
  }
  cout<<"gz = "<<gz<<" go== "<<go<<endl;
  return min(go,gz);    
}
void printMinFlips(vector<int>array){
    // storing the size of the vector in a var 
    int n=(int) array.size();
    // we will only flip the second group elements 
    // the groups can either be equal in number , i.e diff=0 
    // or there is one more group . i.e diff =1 

     // ********** diff =1 *******************
    //if the first group elements are equal to the last group elements 
    // we know the number of groups which are less are the second group elements 
    // ************ diff =0 *******************
    // else if the first group elements and last group elements are not same 
    // then both 0 and 1` have same number of groups
    for(int i=1;i<n;i++){
        // i.e we search for second group elements 
        if(array[i-1]!=array[i]){
            if(array[i]!=array[0]){
            cout<<"From "<<i<<"to ";
            }
            else{ 
                cout<<i-1<<endl; 
            }
        } 
      }
     if(array[n-1]!=array[0]){
        cout<<(n-1) <<endl;
     }
}
    
int main(){
    vector<int>array={1,0,1,0,0,0,1,0,0,1,1,1,1,1};
    printMinFlips(array);
    cout<<minConsecutiveFlips(array)<<endl;    
}