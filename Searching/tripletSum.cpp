// for a given SORTED array and sum , find if a possible triplet
// is present in the array that gives the sum on addition



//NOTE : in case the given array was not sorted , the better approach 
// with TC =O(n^2) and O(n) extra space will be the hashing approach 
// in which we store the values of array into a hashmap 

#include <iostream>
#include <vector>
using namespace std;

bool ifPairExist(vector<int> array, int low, int high, int sum);
vector<int> answer{-1, -1, -1};
// the optimised solution that takes TC O{n^2}
// uses the two pointer approach and checks for all valid pairs
// of the aray to check the sum
bool ifTripletExist(vector<int> array, int sum)
{

    int n{(int)array.size()};
    for (int i = 0; i < n; i++)
    {
        if (ifPairExist(array, i + 1, n - 1, sum - array[i]))
        {
            answer[0] = array[i];
            return true;
        }
    }
    return false;
}

bool ifPairExist(vector<int> array, int low, int high, int sum)
{
    int currentsum;
    while (low < high)
    {
        currentsum = array[low] + array[high];
        if (currentsum == sum)
        {
            answer[1] = array[low];
            answer[2] = array[high];
            return true;
        }
        else if (currentsum > sum)
        {
            --high;
        }
        else if (currentsum < sum)
        {
            ++low;
        }
    }
    return false;
}
int main()
{
    vector<int> array = {2, 5, 8, 12, 30};
    int x = 19;
    ifTripletExist(array, x) ? cout << "Yes Triplet Exist " : cout << "Does not exist";
    cout << endl;
    cout << "The Triplet is:  ";
    for (int i : answer)
        cout << i << " ";
    cout << endl;
}
