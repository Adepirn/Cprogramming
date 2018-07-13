#include <stdio.h>

int main()
{
    char buffer[255];
    printf("Enter string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("Your string was: ");
    puts(buffer);

    return 0;
}