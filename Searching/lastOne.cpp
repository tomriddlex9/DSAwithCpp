#include <iostream>
using namespace std;
// the naive solution is not even worth writing because it will always give 
// worst case like performance 
int lastOccurenceNaive(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        // found and is the last element of array
        if (arr[i] == x && i == n - 1)
            return i;
        else if (arr[i] == x && arr[i + 1] != arr[i])
            return i;
    }
    return -1;
}
int lastOccurenceRecursive(int arr[], int low, int high, int x, int n)
{
    // edge case where element not present
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    // move to left subarray 
    if (x < arr[mid])
        return lastOccurenceRecursive(arr, low, mid - 1, x, n);
    // move to right subarray 
    else if (x > arr[mid])
        return lastOccurenceRecursive(arr, mid + 1, high, x, n);
    // mid element is same 
    else
    {
        // the found element is the last element of the array 
        // or the occurence is last 
        if (mid == n - 1 || arr[mid] != arr[mid + 1])
            return mid;
        // found the element but it is not the last occurence , so 
        // we move towards the right side 
        else
            return lastOccurenceRecursive(arr, mid + 1, high, x, n);
    }
    // to prevent non returning function warnign and if the element is not found 
    return -1;
}
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
        {   // the found element is the last element of the array 
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
int main()
{
    int arr[] = {5, 10, 10, 14, 15}, n = 5;
    int x = 10;
    cout << lastOccurenceNaive(arr, n, x) << endl;
    cout << lastOccurenceRecursive(arr, 0, n - 1, x, n) << endl;
    cout << lastOccurenceIterative(arr, n, x) << endl;
}