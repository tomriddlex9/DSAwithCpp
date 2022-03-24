#include<bits/stdc++.h>
using namespace std;
int solve()
{
	string i,p; 
	cin>>i; 
	cin>>p; 
	// if the error string has lesser characters 
	if(p.size()<i.size()) {
		return -1; 
	}
	//  if strings are of same size  
	if(p.size()==i.size()){
		for(int x=0;x<p.size();x++) {
			// strings are different 
			if(p[x]!=i[x]) {
				return -1; 
			}
		}
		// are exactly same 
		return 0;
	}
	// if error string is larger than correct string 
	int counter{0};
	//x for the traversal of i ( correct string) 
	// y for the traversal of p (incorrect string)
	int x{0},y{0};
	while(y<p.size()){
		// characters are same in both , then increment x and y 
		// no change in counter 
		if(i[x]==p[y]){ 
			x++; 
			y++; 
		}
		// characters are different , i.e the character in wrong string does not match 
		// then check for the next character to be same in wrong string and increment counter
		if(i[x]!=p[y]){
			//end of incorrect string reached and still characters left in correct string
			// then it is not possible , since we have to add more characters 
			if(y==p.size() && x<i.size()){ 
				return -1; 
			}
			y++ ;
			counter++;
		}
		//all characters are matched with the correct string 
		//then increment the counter with remaining elements of the incorrect string
		// i.e add the number of extra characters after the correct string
		if(x==i.size()&&y<p.size()){
			counter+= p.size()-y; 
		}
		// correct string has characters remaining but 
		// incorrect string has completed 
		if(x<i.size() && y==p.size()){
			return -1;
		}
	}
	return counter;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt{3};  
	cin>>tt; 
	for(int i=1;i<=tt;i++)
	{ 
		int answer=solve(); 
		if(answer==-1){
			cout<<"Case #"<<i<<": IMPOSSIBLE"<<endl;
		}
		else{
			cout<<"Case #"<<i<<": "<<answer<<endl; 
		}  
	}
}