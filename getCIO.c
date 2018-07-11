/*
Mahaffey, Richard
11 July 2018
*/


#include <stdio.h>

int main()
{
    int input = 0;
    printf("Enter a character: ");
    input = getc(stdin);
    printf("Your character was: ");
    putc(input, stdout);
    printf("\n");


    return 0;
}