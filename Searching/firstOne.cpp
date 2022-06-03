#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x)
{
    // traverse the array  
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;

    return -1;
}
int firstOccurenceRecursive(int arr[], int low, int high, int x)
{
    // edge case
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    // move to right subarray
    if (x > arr[mid])
        return firstOccurenceRecursive(arr, mid + 1, high, x);
    // move to left subarray
    else if (x < arr[mid])
        return firstOccurenceRecursive(arr, low, mid - 1, x);
    else
    {
        // element is found and is the first occurence
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
        {
            // the element is found but is not the first occurence of it
            // then we move slightly to the left only
            return firstOccurenceRecursive(arr, low, mid - 1, x);
        }
    }
    return -1;
}
int firstOccurenceIterative(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == 0 || arr[mid - 1] != arr[mid])
				return mid;

			else
				high = mid - 1;
		}

	}

	return -1;
}

int main()
{

    int arr[] = {5, 10, 10, 14, 15}, n = 5;
    int x = 10;
    cout << firstOccurrence(arr, n, x) << endl;
    cout << firstOccurenceRecursive(arr, 0, n - 1, x) << endl;
    cout << firstOccurenceIterative(arr, n, x)<<endl;
    return 0;
}