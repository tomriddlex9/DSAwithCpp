#include<bits/stdc++.h> 
using namespace std;

// recursive approach that creates a recursive binary tree for all possible pairs of value 
// where j>i and price[j]>price[i] , then creates two partitions to look for such pairs 
// 
int stockRecursive(vector<int>prices,int start,int end){
    if(end<=start) return 0;
    int profit=0; 
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(prices[j]>prices[i]){
                int currProfit=(prices[j]-prices[i])
                +stockRecursive(prices,start,i-1)
                +stockRecursive(prices,j+1,end);
                profit=max(profit,currProfit); 
            }
        }
    }
    return profit; 
}
int stockEfficient(vector<int>prices){
    int n{prices.size()-1}; 
    int profit{0};
    for(int i=1;i<=n;i++){
        if(prices[i]>prices[i-1]){
            profit+=(prices[i]-prices[i-1]);
        }
    }
    return profit; 
}
int main(){
    vector<int>prices={1,5,3,8,12}; 
    int n{prices.size()-1};
    cout<<stockRecursive(prices,0,n)<<endl; 
    cout<<stockEfficient(prices)<<endl;
}