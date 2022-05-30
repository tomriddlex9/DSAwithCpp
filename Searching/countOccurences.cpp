#include <iostream>
using namespace std;
// traverse the complete array and count number of occurences
// TC = O(n)
int countOccurencesNaive(int arr[], int n, int x)
{
    int counter{0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            counter++;
    }
    return counter;
}
int firstOccurence(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x < arr[mid])
            high = mid - 1;
        else if (x > arr[mid])
            low = mid + 1;
        else
        {
            if (x == arr[0] || arr[mid] != arr[mid - 1])
                return mid;
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int lastOccurence(int arr[], int low, int high, int x)
{
    int n=high+1;
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
// better approach is to find the first occurence of the element
// and then traverse to the right side and count the occurences
// TC  = O{log n + numberofOccurences(x)}
int countOccurencesOptimised(int arr[], int n, int x)
{
    int counter{0};
    int firstOccurenceIndex{firstOccurence(arr, 0, n - 1, x)};
    if (firstOccurenceIndex == -1)
        return 0;
    else
    {
        for (int i = firstOccurenceIndex; i < n; i++)
        {
            if (arr[i] != x)
                break;
            else
                counter++;
        }
    }
    return counter;
}
// the best possible approach is to firstly find the firstOcccurence of the element
// and then in the subarray arr(mid,n-1) find the last occurence of the element
// TC = O(log n )
int countOccurencesBest(int arr[], int n, int x)
{
    int firstOccurenceIndex{firstOccurence(arr, 0, n, x)};
    // the element is not present in the arary 
    if(firstOccurenceIndex==-1) return 0; 
    int lastOccurenceIndex{lastOccurence(arr, firstOccurenceIndex, n, x)};
    //cout<<lastOccurenceIndex << "  " <<firstOccurenceIndex<<endl; 
    return lastOccurenceIndex - firstOccurenceIndex + 1 ;
}
int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30};
    int n = 6, x = 20;
    cout << countOccurencesNaive(arr, n, x) << endl;
    cout << countOccurencesOptimised(arr, n, x) << endl;
    cout << countOccurencesBest(arr, n, x) << endl;
}