/*
        5. Write a program to determine whether a character entered by the user is
        lowercase or not.
*/
#include <stdio.h>

int main()
{
    char character;
    printf("Please enter one letter that you want to check \n:");
    scanf("%c", &character);
    if (character >= 97 && character <= 122)
    {
        printf("The letter :-'%c' entered by you is in small case.", character);
    }
    else
    {
        printf("The letter :-'%c' entered by you is not in small case.", character);
    }
    return 0;
}