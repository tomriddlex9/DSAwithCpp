#include <iostream>
#include <vector>
using namespace std;
// the naive solution to find the peak element is to search the array sequentially
// and look for every elements adjacent values

// this naive approach is better to use if we have to find all the peak elements of the array
// else we should use the optimised approach given below

int findPeakElement(vector<int> array)
{

    int n = (int)array.size();
    // if only one element present , then it is peak element
    if (array.size() == 0)
        return array[0];
    // if corner elements are greater than their left and right
    // adjacents , then they are also peak elements
    if (array[0] > array[1])
        return array[0];
    if (array[n - 1] > array[n - 2])
        return array[n - 1];
    // if above cases dont apply then regular search for peak element
    int low{1}, high{(int)array.size() - 2};
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] >= array[mid - 1] && array[mid] >= array[mid + 1])
            return array[mid];
        // if the left element to mid is greater than the peak element
        // will be in the left subarray else it will be on the right
        else if (array[mid - 1] > array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
int main()
{
    vector<int> array = {5, 20, 28, 29, 30, 50, 45};
    cout << findPeakElement(array) << endl;
}