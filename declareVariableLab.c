#include <stdio.h>

int main()
{
    int integer = 3;
    float myFloat = 3.1;
    double myDouble = 3.141414;
    char myChar = 'd';

    printf("my int is %d and its size is %d \n", integer, sizeof(integer));
    printf("my float is %f and its size is %d \n", myFloat, sizeof(myFloat));
    printf("my double is %lf and its size is %d \n", myDouble, sizeof(myDouble));
    printf("my character is %c and its size is %d \n", myChar, sizeof(myChar));

    return 0;


}