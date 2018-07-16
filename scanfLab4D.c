#include <stdio.h>

int main()
{
    printf("%f", 1.2);
    printf("\n");
    printf("%+8.4f", -1.798);
    printf("\n");
    printf("% 7.2f", 0.987654321);
    printf("\n");
    printf("%-6.1f is yours", 13.37);
    printf("\n");
    printf("Yours is %05.2f", 1.2345);
    printf("\n");
    printf("%s", "Hello World!\0");
    printf("\n");   
    printf("%9.5s", "Hello world!\0");
    printf("\n");
    printf("%016.11s", "Hello world!\0");
    printf("\n");
}