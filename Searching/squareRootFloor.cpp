#include <iostream>
using namespace std;

// this approach takes O(sqrt(n)) time
int squareRootNaive(int n)
{
    // in case of 1 and 0 Return the numbers only 
    if (n == 1 || n == 0)
        return n;
    // variable for while loop 
    int i{1};
    // loop unitll greater than sqrt(n)
    while (i * i <= n)
    {
        i++;
    }
    // return the value -1 since we moved upward of sqrt(n)
    // and also in case of non -square numbers we need to erturn the floor value of sqrt(n)
    return (i - 1);
}
// custom power function , to calculate the power/exponent of number 
int pow(int n, int e)
{
    while (--e)
    {
        n *= n;
    }
    return n;
}

// a better solution with TC = O(log n)
int squareRootOptimised(int n)
{
    if (n == 0 || n == 1)
        return n;
    // var ans to keep track of floor of sqrt in case we need to find last occurence 
    // i.e the maximum possible floor 
    int low{1}, high{n}, ans{-1};
    // loop untill low and high cross each other 
    while (low <= high)
    {
        // mid val
        int mid = (low + high) / 2;
        // square of midddle element , a modified form of binary search 
        int midSquare = pow(mid, 2);
        // if sqrt found then return mid element 
        if (midSquare == n)
            return mid;
        // if sqr val greater than number , move to left subarray 
        else if (midSquare > n)
        {
            high = mid - 1;
        }
        // else move to the left subarray and keep track of values 
        // untill you get the maximum possible floor value 
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n{6179767};
    cout << squareRootNaive(n) << endl;
    cout << squareRootOptimised(n) << endl;
}