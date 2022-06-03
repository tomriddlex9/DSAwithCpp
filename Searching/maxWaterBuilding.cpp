// Given an integer array representing the heights of N buildings,
// the task is to delete N-2 buildings
// such that the water that can be trapped between
// the remaining two building is maximum.

// { Driver Code Starts
// Initial Template for C++

// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

int maxWater(int height[], int n)
{
    int low{0}, high{n - 1};
    int gap, maxWater{0}, minHeight;
    while (low < high)
    {
        minHeight = min(height[low], height[high]);
        gap = minHeight * (high - low - 1);
        maxWater = max(maxWater, gap);
        if (height[low] < height[high])
            low++;
        else
            high--;
    }
    return maxWater;
}

int main()
{
    int height[] = {2, 1, 3, 4, 6, 5};
    int n = 6;
    cout << maxWater(height, n) << endl;
}
