#include <iostream>
#include <vector>
using namespace std;

// this solution is good but not the best 
// TC = O(n) and space complexity = O(n)
// this approach only works when elements are in a fix range 
int findDuplicates(vector<int> array)
{
    int n = (int)array.size();
    vector<int> flags(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (flags[array[i] != 0])
            return array[i];
        flags[array[i]]++;
    }
    return -1;
}
int main()
{
    vector<int> array = { 1, 3, 4, 0, 3, 5, 2, };
    cout << findDuplicates(array) << endl;
}