#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20;

    //without using third variable

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

//    int temp = a;
//    a = b;
//    b = temp;

    printf("%d %d", a, b);

    return 0;
}
