#include <bits/stdc++.h>
using namespace std;
int minNumber(int arr[], int low, int high);
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    cout << minNumber(arr, 0, 9) << endl;
    // cout<<INT_MAX<<endl;
}
int minNumber(int arr[], int low, int high)
{
    int minimum{INT_MAX};
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // we have to look on the unsorted side
        // since if one subarray is unsorted then we know that
        // after rotation , the lowest element of the original array
        // will be on the unsorted side

        // check if left side is unsorted , if yes
        // then move to this side and search for the element
        if (arr[low] > arr[mid])
        {
            high = mid;
        }
        else if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        // if none of the side is unsorted then , the smallest element
        // will be the lowest element
        // this case happens either when the array is not rotated
        // or the mid is the point from where the array was rotated
        // i.e the least element of the original unrotated array
        else
        {
            minimum = arr[low];
            break;
        }
    }
    return minimum;
}