## What is Tail Recursion ?
A recursive function is tail recursive when a recursive call is the last thing executed by the function. For example the following C++ function print() is tail recursive. 

The Following is a tail recursive program to print all the numbers from N to 1 : 

```cpp
// An example of tail recursive function
void print(int n)
{
    if (n < 0)  return;
    cout << " " << n;
 
    // The last executed statement is recursive call
    print(n-1);
}
```
## Need of Tail Recursive Function over Non-Tail Recursive : 

* The tail recursive functions considered better than non tail recursive functions as tail-recursion can be optimized by the compiler.
*  Compilers usually execute recursive procedures by using a stack. This stack consists of all the pertinent information, including the parameter values, for each recursive call. When a procedure is called, its information is pushed onto a stack, and when the function terminates the information is popped out of the stack.
*  Thus for the non-tail-recursive functions, the stack depth (maximum amount of stack space used at any time during compilation) is more. The idea used by compilers to optimize tail-recursive functions is simple, since the recursive call is the last statement, there is nothing left to do in the current function, so saving the current function’s stack frame is of no use.
  
### Note : Not all but a few functions can be re-written to turn them from Non-Tail Recursive to Tail Recursive Functions .


--- 


## Non-Tail Recursive Functions to Tail Recursive for Optimisation : 


Consider the following function to calculate the factorial of n. It is a non-tail-recursive function. Although it looks like a tail recursive at first look. If we take a closer look, we can see that the value returned by fact(n-1) is used in fact(n), so the call to fact(n-1) is not the last thing done by fact(n).

```cpp
#include<iostream>
using namespace std;
 
// A NON-tail-recursive function.  The function is not tail
// recursive because the value returned by fact(n-1) is used in
// fact(n) and call to fact(n-1) is not the last thing done by fact(n)
unsigned int fact(unsigned int n)
{
    if (n == 0) return 1;
 
    return n*fact(n-1);
}
 
// Driver program to test above function
int main()
{
    cout << fact(5);
    return 0;
}
```
**The above function can be written as a tail recursive function. The idea is to use one more argument and accumulate the factorial value in the second argument. When n reaches 0, return the accumulated value.**

```cpp
#include<iostream>
using namespace std;
 
// A tail recursive function to calculate factorial
unsigned factTR(unsigned int n, unsigned int a)
{
    if (n == 1)  return a;
 
    return factTR(n-1, n*a);
}
 
// A wrapper over factTR
// so that user does not have to give two parameters 
// and the function is still simple to understand 
unsigned int fact(unsigned int n)
{
   return factTR(n, 1);
}
 
// Driver program to test above function
int main()
{
    cout << fact(5);
    return 0;
}
```

----
## Tail Call Elimination 

We know that a recursive function is tail recursive if the recursive call is the last thing executed by the function and that tail-recursion is better than a non-tail recursive function as they can be optimized by modern compilers. 

Tail call elimination is the optimisation done by modern compilers to optimise the Tail Recursive Code. 

For the first example ( The tail recursive Print Function ) which was used to print Values from N to 1 . We can just remove the process of recursion by using a goto statement with the decreasing parameter. 

```cpp
void print(int n)
{
start:
    if (n < 0)
       return;
    cout << " " << n;
 
    // Update parameters of recursive call
    // and replace recursive call with goto
    n = n-1
    goto start;
}
```

## Function stack frame management in Tail Call Elimination : 

Recursion uses a stack to keep track of function calls. With every function call, a new frame is pushed onto the stack which contains local variables and data of that call. Let’s say one stack frame requires O(1) i.e, constant memory space, then for N recursive call memory required would be O(N). 

Tail call elimination reduces the space complexity of recursion from O(N) to O(1). As function call is eliminated, no new stack frames are created and the function is executed in constant memory space. 

It is possible for the function to execute in constant memory space because, in tail recursive function, there are no statements after call statement so preserving state and frame of parent function is not required. Child function is called and finishes immediately, it doesn’t have to return control back to the parent function. 

As no computation is performed on the returned value and no statements are left for execution, the current frame can be modified as per the requirements of the current function call. So there is no need to preserve stack frames of previous function calls and function executes in constant memory space. This makes tail recursion faster and memory-friendly.
