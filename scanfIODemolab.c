#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter the day month and year in the format DD-MM-YYYY: ");

    scanf("%d-%d-%d", &day, &month, &year);

    printf("%02d/%02d/%4d\n", day, month, year);

    return 0;
}