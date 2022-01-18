#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3], i, j;

    printf("Enter values in matrix-1:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter values in matrix-2:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Values in matrix-1 are:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Values in matrix-2 are:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Addition is:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
