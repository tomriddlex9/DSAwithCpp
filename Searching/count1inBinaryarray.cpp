#include <iostream>
#include <vector>
#include <array>
using namespace std;
int countOnesNaive(int a[], int n)
{
    int counter{0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            counter++;
    }
    return counter;
}
int countOnesOptimised(int a[], int n)
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
// if the array is sorted in non-increasing order ( descending )
// then we find the last occurence of 1 and return the index+1 value
// else if the array is sorted in non-decreasing order(ascending )
// then we find the first occurence of 1 and return (n-index)
int lastOccurenceIterative(int arr[], int n, int x)
{
    int low{0}, high{n - 1};
    // traverse the array untill high and low cross each other
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // go to left subarray
        if (x < arr[mid])
            high = mid - 1;
        // go to right subarray
        else if (x > arr[mid])
            low = mid + 1;
        // element is found
        else
        { // the found element is the last element of the array
            // the found element is the last occurence
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            // the element is found but is not the last occurence
            // so we move towards the right side
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}
int countOnesBest(int a[], int n)
{
    int lastIndex{lastOccurenceIterative(a, n, 1)};
    if (lastIndex == -1)
        return 0;
    return lastIndex + 1;
}
int main()
{
    int a[] = {1, 1, 1, 1, 1, 1, 0, 0};
    cout << countOnesNaive(a, 8) << endl;
    cout << countOnesOptimised(a, 8) << endl;
    cout << countOnesBest(a, 8) << endl;
}