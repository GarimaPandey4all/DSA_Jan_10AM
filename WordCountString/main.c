#include <stdio.h>
#include <stdlib.h>

//"How": HOW, how

int main()
{
    char str[20] = "How are you?";
    int word = 0;

    for(int i = 0; str[i]!= '\0'; i++)
    {
        if(str[i] == ' ')
        {
            word++;
        }
    }

    printf("Word Count of the Given String is: %d", word + 1);

    return 0;
}
