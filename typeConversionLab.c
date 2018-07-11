#include <stdio.h>

int main()
{
    int myInt = 42;
    float myFloat = 3.14;
    double myDouble = 3.14159;
    char myLetter = 'x';

    printf("Your int %d cast to a float %f \n", myInt, (float) myInt);
    printf("Your int %d cast to a character %c \n", myInt, (char) myInt);
    printf("Your Float %f cast to a double %.15f \n", myFloat, (double) myFloat);
    printf("Your double %.15f cast to a float %f \n", myDouble, (float) myDouble);
    printf("Your Character %c cast to an Integer %d \n", myLetter, (int) myLetter);
    printf("33 cast to a Character %c \n", (char) 33);

    return 0;

}