/*
Declare and zeroize a char array with a dimension of 256
Assign your chosen pharse to the leading elements of that array
Explicitly verify your string is nul-terminated
Print your string
*/



#include <stdio.h>

int main()
{
    char phrase[256] = {0};

    phrase[0] = 'T';
    phrase[1] = 'h';
    phrase[2] = 'e';
    phrase[3] = ' ';
    phrase[4] = 'A';
    phrase[5] = 'n';
    phrase[6] = 's';
    phrase[7] = 'w';
    phrase[8] = 'e';
    phrase[9] = 'r';
    phrase[10] = ' ';
    phrase[11] = 'i';
    phrase[12] = 's';
    phrase[13] = ' ';
    phrase[14] = '4';
    phrase[15] = '2';
    phrase[16] = '\0';

    printf("My Phrase is \"%s\"\n", phrase);

    return 0;
}