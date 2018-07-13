#include <stdio.h>

int main()
{
    char firstName[20] = {0};
    char middleName[20] = {0};
    char lastName[20] = {0};

    printf("Please enter your First Middle and Last Name: ");
    scanf("%15s %15s %15s", &firstName, &middleName, &lastName);
    printf("Your entered name is:\n\t%s\n\t%s\n\t%s\n", firstName, middleName, lastName);

    return 0;

}