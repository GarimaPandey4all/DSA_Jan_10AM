#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3, 7, 7, 3, 3, 4, 4, 5, 5};
    int result = 0;

    for(int i = 0; i < 7; i++)
    {
        result ^= arr[i];
    }

    printf("Single Number is: %d", result);

    return 0;
}
