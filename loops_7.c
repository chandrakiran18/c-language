// 7. Write a program to calculate the factorial of a given number using while loop.
#include <stdio.h>

int main(){
    int i = 1, fact = 1,n;
    printf("Enter the number to find it's factorial:");
    scanf("%d", &n);
    while (i <=n )
    {
        fact = fact * i;
        i++;
    }
        printf("The factorial of %d is %d",n, fact);

    return 0;
}