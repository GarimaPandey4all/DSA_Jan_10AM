#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = {'R', 'a', 'm'};
    int i = 0;
    int j = 2;
    char temp;

    while(i < j)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;

        i++;
        j--;
    }

    for(i = 0; i < 3; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}
