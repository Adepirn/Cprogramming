#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main()
{
    uint32_t mask = 1;
	uint32_t num1;
    uint32_t newNum;
    uint32_t shift;
    uint32_t num2;
    printf("What number would you like to change:\n>>");
    scanf("%u", &num1);
    printf("What Bit do you want to flip between 0 and %d\n", ((sizeof(num1)*8)-1));
    scanf("%u", &shift);
    mask = mask << shift;
    printf("%u %u\n", num1, shift);
    newNum = num1 ^ mask;
    printf("The result is %X\n", newNum);

    return 0;
}