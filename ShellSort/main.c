#include <stdio.h>
#include <stdlib.h>

void shellSort(int arr[], int n)
{
    int i, j, temp;

    int m = n / 2; // 2

    while(m > 0) // 2 > 0
    {
        5, 2, 4, 3, 1
        4, 2, 5, 3, 1
        4, 2, 1, 3, 5
        1, 2, 4, 3, 5
        1, 2, 3, 4, 5


        for(i = m; i < n; i++) //i = 2, 3, 4, 5; i = 1, 2, 3, 4
        {
            for(j = i - m; j >= 0; j = j - m) // j = 0, -2, 1, 2, 0, -2; j = 0, 1, 2
            {
                if(arr[j] > arr[j + m]) // 5 > 4, 2 > 3, 5 > 1, 4 > 1, 1 > 2, 2 > 4, 4 > 3
                {
                    temp = arr[j];
                    arr[j] = arr[j + m];
                    arr[j + m] = temp;
                }
                else {
                    break;
                }
            }

        }

        m = m / 2; // 1, 0
    }
}


int main()
{
    int arr[] = {5, 2, 4, 3, 1};
    int i;

    shellSort(arr, 5);

    printf("Sorted Array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
