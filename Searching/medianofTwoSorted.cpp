#include <iostream>
#include <vector>
using namespace std;

// this approach is not the best solution to find out the median of two arrays
// but is still a better approach and takes O(n/2) time complexity
// where n=(n1+n2)

double medianofTwoArrays(int arr1[], int arr2[], int n1, int n2)
{
    int n = n1 + n2;
    vector<int> array;
    int mid = n / 2;
    int median;
    int p1{0}, p2{0};
    while (p1 + p2 <= mid && p1 <= n1 && p2 <= n2)
    {
        if (p1 > n1)
        {
            median = arr2[p2++];
        }
        if (p2 > n2)
        {
            median = arr1[p1++];
        }
        if (arr1[p1] < arr2[p2])
        {
            median = arr1[p1];
            p1++;
        }
        else if (arr1[p1] > arr2[p2])
        {
            median = arr2[p2];
            p2++;
        }
        // if both are same elements
        else
        {
            median = arr1[p1++];
        }
        array.push_back(median);
    }
    int newsize = (int)array.size();
    // cout << array.size() << endl;
    // for (int i : array)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    if (newsize % 2 == 0)
        return (double)(array[newsize - 1] + array[newsize - 2]) / 2;
    else
        return array[newsize - 1];
}
int main()
{
    int arr1[] = {10, 20, 30};
    int arr2[] = {5, 15, 25};
    int n1{3}, n2{3};
    cout << medianofTwoArrays(arr1, arr2, n1, n2) << endl;
}