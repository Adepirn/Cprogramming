#include <stdio.h>

int main()
{
    int integer = 1;
    float singlePrecision = 3.1;
    double doublePrecision = 3.1415926535;
    char singleChar = 'x';
    char singlechar2 = 33;

    printf("the size of your integer is %d \n", sizeof(integer));
    printf("the size of your float is %d \n", sizeof(singlePrecision));
    printf("the size of your other float is %d \n", sizeof(doublePrecision));
    printf("the size of your first character is %d \n", sizeof(singleChar));
    printf("the size of your toher character is %d \n", sizeof(singlechar2));

    return 0;
}