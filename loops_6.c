// 6. Write a program to calculate the factorial of a given number using a for loop.
#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter the number to find it's factorial:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d",n, fact);
    return 0;
}