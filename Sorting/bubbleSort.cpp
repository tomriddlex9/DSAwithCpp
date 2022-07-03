#include <iostream>
using namespace std;
// bubble sort function
void bubbleSort(int arr[], int size)
{
    // bool to check if swapping happened in the current pass
    // if no element was swapped in the current pass then the array is sorted
    bool swapped;
    // outer loop for n passes
    for (int i{0}; i < size - 1; i++)
    {
        // resetting swapped after outer loop iteration
        swapped = false;
        // inner loop, where for each pass the number of elements to be swapped gets
        // reduced, since the largest integer is bubbled out at the end of array
        for (int j = 0; j < size - i - 1; j++)
        {
            // check for every adjacent element and swap if inversion found
            if (arr[j] > arr[j + 1])
            {
                // if atleast one swap happened then change swapped status to true
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // if no swap required , and all are sorted then break from that pass and return
        if (swapped == false)
            break;
    }
}
// main function
int main()
{
    // integer array
    int arr[] = {8, 3, 7, 3, 7, 89, 32, 712};
    cout << "Unsorted array: \n";
    // print unsorted array
    for (int x : arr)
        cout << x << " ";
    // call the bubble sort function on array
    //@param bubbleSort(int arr[], int arraysize)
    bubbleSort(arr, 8);
    // print the sorted array
    cout << "\nSorted array:\n";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}