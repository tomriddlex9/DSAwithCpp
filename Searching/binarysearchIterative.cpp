#include <iostream>
using namespace std;
int binarySearch(int array[], int n, int key)
{
    int low = 0, high = n - 1;
    // since we are constantly incrementing the low and decrementing the low
    // this is the check to see if the search is still in the bounds of the array
    while (low <= high)
    {
        // get the middle element
        int mid = (low + high) / 2;
        int midBetter = low + (high - low) / 2;
        if (array[mid] == key)
        {
            return mid; // exit point
        }
        else if (key < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1; // if key not found then this is exit point
}
int main()
{
    int array[10] = {2, 6, 8, 9, 56, 67, 87, 88, 92, 99};
    int key;
    cin >> key;
    cout << binarySearch(array, 10, key) << endl;
}