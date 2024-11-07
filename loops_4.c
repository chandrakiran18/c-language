// 4. Write a program to implement program to sum first ten natural numbers using ‘for’ and ‘do-while’ loop.
#include <stdio.h>

int main()
{
    /*
    int i = 1, sum = 0;
    do
    {
        sum = sum + i;
        i++;
    }while (i <= 10);
        printf("The sum of the first ten natural numbers is %d", sum);
    */

//    The above code is for (do while loop),The below code is for (for loop).
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("The sum of the first ten natural numbers is %d", sum);
    return 0;
}