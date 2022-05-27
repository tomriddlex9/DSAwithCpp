#include <iostream>
#include <vector>
using namespace std;
int binarySearchRecursive(vector<int> array, int low, int high, int key)
{
    //the low and high makes sense , else return -1 as base case 
    if (low <= high)
    {   
        //better to calculate mid this way 
        int mid = low + (high - low) / 2;
        //other alternative non-safe way to calculate mid is : 
        // mid = (high+low)/2 

        // these are the three cases for binary search that might occur
        // if element is present , it is returned by this case only 
        if (array[mid] == key)
            return mid;
        
        // move to the lower range , (low , mid-1 )
        else if (key < array[mid])
        {
            return binarySearchRecursive(array, low, mid - 1, key);
        }
        // move to the higher range , (mid+1, high)
        else if (key > array[mid])
        {
            return binarySearchRecursive(array, mid + 1, high, key);
        }
    }
    // element is not present 
    return -1;
}

int main()
{
    vector<int> array = {2, 6, 8, 9, 56, 67, 87, 88, 92, 99};
    int n = (int)array.size();
    int key;
    cin >> key;
    cout << binarySearchRecursive(array, 0, n - 1, key) << endl;
}