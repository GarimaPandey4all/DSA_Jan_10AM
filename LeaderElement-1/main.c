#include <stdio.h>
#include <stdlib.h>

//16, 17, 4, 3, 5, 2
//
//1st way: brute force approach
//LE: 17, 5, 2
//
//2nd way
//Scan array from right
//
//max = 0, 2, 5, 17
//
//LE: 2, 5, 17

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int max = 0, i;

    for(i = 5; i >= 0; i--)
    {
        if(arr[i] > max)
        {
            printf("Leader is: %d\n", arr[i]);
            max = arr[i];
        }
    }

    return 0;
}
