#include <stdio.h>
#include <stdlib.h>

Recursion: Function calls itself is called recursion or recursive call.

Recursion

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

Iteration

int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

what is call stack?

- A call stack is a stack data structure that is ued to trace the sequence of the function call.


void recurse()
{
    recurse(); // recursive call
}


int main()
{
    recursive(); // function call

    return 0;
}
