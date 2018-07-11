#include <stdio.h>

int main()
{
    int myIntArray[10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    float myFloatArray[5] = {1, 2, 3, 4, 5};
    char myCharArray[256] = {0};

    printf("3rd Element of IntArray is %d \n", myIntArray[2]);
    printf("3rd Element of FloatArray is %f \n", myFloatArray[2]);
    printf("3rd Element of CharArray is %c \n", myCharArray[2]);

    myCharArray [0] = 'M';
    myCharArray [2] = 'a';
    myCharArray [3] = 'h';
    myCharArray [4] = 'a';
    myCharArray [5] = 'f';
    myCharArray [6] = 'f';
    myCharArray [7] = 'e';
    myCharArray [8] = 'y';

    myIntArray [0] = (0+1) * 10;
    myIntArray [1] = (1+1) * 10;
    myIntArray [2] = (2+1) * 10;
    myIntArray [3] = (3+1) * 10;
    myIntArray [4] = (4+1) * 10;
    myIntArray [5] = (5+1) * 10;
    myIntArray [6] = (6+1) * 10;
    myIntArray [7] = (7+1) * 10;
    myIntArray [8] = (8+1) * 10;
    myIntArray [9] = (9+1) * 10;

    myFloatArray [0] =  0 * 1.1;
    myFloatArray [1] =  1 * 1.1;
    myFloatArray [2] =  2 * 1.1;
    myFloatArray [3] =  3 * 1.1;
    myFloatArray [4] =  4 * 1.1;

    printf("3rd Element of IntArray is %d \n", myIntArray[2]);
    printf("3rd Element of FloatArray is %f \n", myFloatArray[2]);
    printf("3rd Element of CharArray is %c \n", myCharArray[2]);



    return 0;
}