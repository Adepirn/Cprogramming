#include <stdio.h>

int main()
{
    char buffer[4];
    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("Your string was: ");
    fputs(buffer, stdout);
    printf("\n");

    return 0;
}