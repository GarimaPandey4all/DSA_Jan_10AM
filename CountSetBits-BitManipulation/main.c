#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;

//    1010 = 2

    int count = 0;

    while(n > 0)
    {
        n = n & (n - 1);
        count++;
    }

    printf("Set bit count is: %d", count);

    return 0;
}
