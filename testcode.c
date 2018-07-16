#include <stdio.h>
#include <math.h>

int main()
{
    int answer = 0;
    int a = 2;
    int b = 6;
    int y = 4;
    int p = 9;
    int q = 3;
    //////// ARITHMETIC OPERATOR QUIZ BONUS QUESTION ////////
    //int y = 4;
    //1 + 2 * (3 + y) + 5;        // Result 20
    answer = (1 + 2) - 3 + y * 5;
    printf("%d\n", answer);
    //////// RELATIONAL OPERATOR QUIZ BONUS QUESTION ////////
    //int a = 2; b = 6;
    //a != b != 3 >= a;          // Result 0
    answer = a != b != 3 >= a;
    printf("%d\n", answer);
    //////// ASSIGNMENT OPERATOR QUIZ BONUS QUESTION ////////
    //p = 9; q = 3;
    //(p %= p) || (q /= q--);    // Result 0
    answer = (p %= p) && (q /= q--);
    printf("%d\n", answer);
    // What would be a better way of writing these?

    return 0;
}