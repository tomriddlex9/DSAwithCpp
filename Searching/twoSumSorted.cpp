#include <iostream>
#include <vector>
using namespace std;

// the optimised solution that takes TC O{n}
// uses the two pointer approach and checks for all valid pairs
// of the aray to chekc the sum
bool ifSumExist(vector<int> array, int sum)
{
    int low{0}, high{(int)array.size() - 1};
    int currentsum;
    while (low < high)
    {
        currentsum = array[low] + array[high];
        if (currentsum == sum)
            return true;
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
    ifSumExist(array, x) ? cout << "Yes" : cout << "No";
    cout << endl;
}
