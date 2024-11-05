//  Write a program to print first ‘n’ natural numbers using for loop ?
#include <stdio.h>

int main(){
    int i=1,n;
    printf("Enter the number,to print n no of natural numbers. :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n",i);
    }
    
    
    return 0;
}