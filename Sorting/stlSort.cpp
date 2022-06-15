#include <iostream>
#include <vector>
#include <algorithm>
#define NL cout << endl;
using namespace std;
int main()
{
    int arr[10] = {45, 67, 34, 675, 56, 78, 2, 74, 7, 3};
    vector<int> v = {5, 3, 634, 65, 234, 98, 43};
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    NL
        sort(arr, arr + 10);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    NL for (int x : v) cout << x << " ";
    NL
        sort(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    NL
        sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
        cout << x << " ";
    NL
}