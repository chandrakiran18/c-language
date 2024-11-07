// 8. Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>

int main(){
    int n, not_prime = 0;
    printf("Enter the number to find it is prime or not:");
    scanf("%d", &n);
    for (int i = 2; i <n; i++)
    {
        if(n%i==0 && n!=2){
            not_prime=1;
            break;
        }
    }
    if(not_prime){
        printf("The number entered by you %d is not a prime number",n);
        }
        else{
            printf("The number entered by you %d is a prime number",n);
        }
    return 0;
}