#include <stdio.h>
#include <stdlib.h>

//Replace elements with greatest element on right side

int main()
{
    int arr[] = {17, 18, 5, 4, 6, 1};
    int n = 6, temp;
    //output: 18, 6, 6, 6, 1, -1
    int max = arr[n - 1];
    arr[n-1] = -1;

    for(int i = n - 2; i >= 0; i--)
    {
        temp = arr[i];
        arr[i] = max;

        if(temp > max)
        {
            max = temp;
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }


    return 0;
}
