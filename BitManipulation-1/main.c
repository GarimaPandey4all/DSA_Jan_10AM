#include <stdio.h>
#include <stdlib.h>

int main()
{
    //bitwise: &, |, ^, >>, <<, ~
//    ! - true: false
//    ~ - 0 to 1

//    , ....., 128 64 32 16 8 4 2 1
//
//    a = 4, b = 5
//
//    a = 0000 0100
//    b = 0000 0101 &
//        0000 0100 = 4
//
//    left shift shortcut
//
//    a << 1
//
//        0000 0100
//        0000 1000 = 8
//
//    a * 2 ^ 1 = 8
//
//    right shift shortcut
//
//    a >> 1
//
//        0000 0100
//        0000 0010 = 2
//
//    a / 2 ^ 1 = 4 / 2 = 2

    return 0;
}
