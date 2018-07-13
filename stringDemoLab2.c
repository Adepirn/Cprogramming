#include <stdio.h>

int main()
{
    char myFavWord[20] = {0};

    myFavWord [0] = 'I';
    myFavWord [1] = 'n';
    myFavWord [2] = 's';
    myFavWord [3] = 'a';
    myFavWord [4] = 'n';
    myFavWord [5] = 'i';
    myFavWord [6] = 't';
    myFavWord [7] = 'y';
    myFavWord [8] = '\0';

    printf("My favorite word is %s\n", myFavWord);

    return 0;
}