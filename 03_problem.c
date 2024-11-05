// Question :
/*  3.Calculate income tax paid by an employee to the government as per the slabs 
      mentioned below:

        Income Slab

        2.5 – 5.0L                               
        5.0L - 10.0L                          
        Above 10.0L                         
        Tax  
        5% 
        20% 
        30% 
        Note that there is no tax below 2.5L. Take income amount as an input from the user.
 */
#include <stdio.h>

int main(){
    int income;
    float tax;
    printf("Please enter your total income \n: ");
    scanf("%d",&income);
    if(income<=250000){
        tax =0;
        printf("The tax amount according to your income amount is %.2f",tax);
    }
    else if(income<=500000&&income>250000){
        tax =0.05*(income-250000);
        printf("The tax amount according to your income amount is %.2f",tax);
    }
    else if(income<=1000000&&income>500000){
        tax =0.05*(250000)+ 0.20*(income-500000);
        printf("The tax amount according to your income amount is %.2f",tax);
    }
    else if(income>1000000){
        tax =0.05*(250000)+ 0.20*(500000)+ 0.3*(income-1000000);
        printf("The tax amount according to your income amount is %.2f",tax);
    }
    return 0;
}