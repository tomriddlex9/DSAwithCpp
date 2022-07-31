#include <bits/stdc++.h>
using namespace std;
int costCal(int row, int totalRows, int sum, vector<vector<int>> A, int firstSum, int secondSum)
{
    // to check if the current row should be added , if
    // the row is added then return the sum , else call the next row
    // untill row < n

    // base case , where the sum is equal to the required sum
    if (firstSum == sum && secondSum == sum)
        return 0;

    // since this row does not add any value to us , we will not pick this
    // row ++
    if (A[row][1] == 0 && A[row][2] == 0)
    {
        // if the next row is in bound , then move to next row of the matrix
        if (row + 1 <= totalRows)
        {
            return costCal(row + 1, totalRows, sum, A, firstSum, secondSum);
        }
        else
        {
            return INT_MAX;
        }
    }
    // case to pick up a row is if after adding the row , the sum is less than or equal to the
    // required sum
    if (firstSum + A[row][1] <= sum && secondSum + A[row][2] <= sum)
    {
        return (A[row][0]) + costCal(row + 1, totalRows, sum, A, firstSum + A[row][1], secondSum + A[row][2]);
    }
}
int minCOST(int n, int k, int row, vector<vector<int>> A)
{
    int currentCost{INT_MAX};
    int minCost{INT_MAX};

    // check if the sum is less than or greater than the required sum
    // if sum equal to k , return the cost , update the minCost based on it
    // if after adding a row , sum gets greater than iterate to another row
    // if we do not want to include a particular solution or array then we can
    // return cost as MAX_INT

    int currentCost = costCal(0, n, k, A, 0, 0);
    minCost = min(currentCost, minCost);
    if (minCost == INT_MAX)
        return -1;
    else
        return minCost;
}
