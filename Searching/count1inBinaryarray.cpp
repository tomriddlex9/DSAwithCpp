#include <iostream>
#include <vector>
#include <array>
using namespace std;
int countOnesNaive(array<int, 8> a, int n)
{
    int counter{0};
    for (int x : a)
    {
        if (x)
            counter++;
    }
    return counter;
}
int countOnesOptimised(array<int, 8> a, int n)
{
    int low{0}, high{8 - 1};
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == 1 && mid < n - 1 && a[mid + 1] == 0)
            return mid + 1;
        else if (a[mid] == 1 && mid == n - 1)
            return n;
        else if (a[mid] == 1)
        {
            low = mid + 1;
        }
        else if (a[mid] == 0)
        {
            high = mid - 1;
        }
    }
    return 0;
}
int main()
{
    array<int, 8> a = {1, 1, 1, 1, 1, 1, 1, 1};
    cout << countOnesNaive(a, 8) << endl;
    cout << countOnesOptimised(a, 8) << endl;
}