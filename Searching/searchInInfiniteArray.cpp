#include <iostream>
#include <vector>
using namespace std;
int findKeyNaive(vector<int> array, int key)
{
    int i{0};
    // infinite loop untill the array element greater than key
    //  is reached , which means element not present
    while (true)
    {
        if (array[i] == key)
            return i;
        else if (array[i] > key)
            return -1;
        i++;
    }
}
int binarySearch(vector<int> array, int low, int high, int key)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == key)
            return mid;
        else if (key < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int findKeyOptimised(vector<int> array, int key)
{
    int low{0}, high{1};
    if (array[0] == key)
        return 0;
    while (true)
    {

        // firstly find the possible range [low,high] where
        // key might exist

        // if element found at high . then return index
        if (array[high] == key)
            return high;
        // if array[high] is smaller than key then we move towards the right
        // side of the array exponentially
        else if (array[high] < key)
        {
            // out of bound check in case of non-infinite arrays
            if ((high*2) > (int)array.size())
            {
                high = (int)array.size();
                return binarySearch(array,low,high,key);
            }
            low = high;
            high *= 2;
        }
        // if for any high , we get array[high]> key
        // then we have got the range [low,high] where key
        // might possibly exist or not

        // now we simply make a binary search in the specified range
        // and check if the element is present
        else if (array[high] > key)
        {
            return binarySearch(array, low, high, key);
        }
        // return -1;
    }
    return -1;
}
int search(vector<int> arr, int x)
{
    if (arr[0] == x)
        return 0;

    int i = 1;

    while (arr[i] < x)
        i = i * 2;

    if (arr[i] == x)
        return i;

    return binarySearch(arr, i / 2 + 1, i - 1, x);
}
int main()
{
    vector<int> array = {1, 2, 3, 4, 4, 5, 5, 8, 14, 17, 44, 56, 77, 89};
    int key = 44;
    cout << findKeyNaive(array, key) << endl;
    cout << findKeyOptimised(array, key);
    // cout << search(array, key);
}