#include <iostream>
#include <cstring>
using namespace std; 
int totalWays(int n, int m, int lookup[])
{
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}
	if (lookup[n] == 0)
	{
		for (int i = 1; i <= m; i++) {
			lookup[n] += totalWays(n - i, m, lookup);
		}
	}
	return lookup[n];
}

int main()
{ 
    int totalrocks {}, initial{},skip{};
    int n=totalrocks-initial;
    int lookup[n+1];
	memset(lookup, 0, sizeof(int) * (n + 1));
    cin>>totalrocks>>initial>>skip; 
    cout<<totalWays(n, skip, lookup);
}