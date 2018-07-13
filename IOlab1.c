#include <stdio.h>

int main()
{
    int input = 0;
    
    printf("Enter character: ");
    input = getchar();
    putchar(input);
    input++;
    printf("\n");
    putchar(input);
    printf("\n");

    return 0;
}