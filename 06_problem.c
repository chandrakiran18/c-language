//       6. Write a program to find greatest of four numbers entered by the user.
#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter first digit \n:");
    scanf("%d",&a);
    printf("Enter second digit \n:");
    scanf("%d",&b);
    printf("Enter third digit \n:");
    scanf("%d",&c);
    printf("Enter fourth digit \n:");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d){
        printf("First digit :-'%d' entered by you is the greatest number among the four numbers",a);
    }
    else if(b>a&&b>c&&b>d){
        printf("Second digit :-'%d' entered by you is the greatest number among the four numbers",b);
    }
    else if(b>a&&b>c&&b>d){
        printf("Second digit :-'%d' entered by you is the greatest number among the four numbers",b);
    }
    else if(c>a&&c>b&&c>d){
        printf("Third digit :-'%d' entered by you is the greatest number among the four numbers",c);
    }
    else if(d>a&&d>c&&d>b){
        printf("Fourth digit :-'%d' entered by you is the greatest number among the four numbers",d);
    }
    return 0;
}