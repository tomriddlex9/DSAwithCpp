#include <iostream>
#include <vector>
using namespace std;
// naive solution is a simple linear search that will traverse the complete array
// and check for the key
// TC = O(n) SC= O(1)

// an optimised approach is to use binary search and firstly check for which array is sorted
// the already sorted array can be determined by comparing the middle element with the corner elements
int searchInRotated(vector<int> array, int low, int high, int key)
{
  // untill the indexes dont cross each other 
    while (low <= high)
    {
        // calc mid 
        int mid = (low + high )/ 2;
        // check middle element
        if (array[mid] == key)
            return mid;
        // left is sorted, so we move to the left side of the array 
        if (array[low] < array[mid])
        {
            // check if the element lies in the range
            if (array[low] <= key && key < array[mid])
                high = mid - 1;
                // if element is not in range , we move to right subarray 
            else
                low = mid + 1;
        }
        // if left is not sorted, we move to the right subarray 
        else
        {
            //check if the element is in range [mid,high]
            if (array[mid] < key && key <= array[high])
                low = mid + 1;
                // if not in range , then move to left subarray 
            else
                high = mid - 1;
        }
    }
    // if none of the condition matches, i.e the element is not present 
    // then return -1 
    return -1;
}

int main()
{
    vector<int> array = {10, 20, 30, 40, 50, 8, 9};
    int n{(int)array.size()};
    int key{30};
    cout << searchInRotated(array, 0, n - 1, key) << endl;
}