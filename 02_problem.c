/*  2. Write a program to determine whether a student has passed or failed. To pass, a 
    student requires a total of 40% and at least 33% in each subject. Assume there 
    are three subjects and take the marks as input from the user.   */
    #include <stdio.h>
    
    int main(){
        int mark1,mark2,mark3;
        printf("Please enter the marks of the First subject \n:");
        scanf("%d",&mark1); 
        printf("Please enter the marks of the Second subject \n:");
        scanf("%d",&mark2);
        printf("Please enter the marks of the Third subject \n:");
        scanf("%d",&mark3);
        if(mark1<33||mark2<33||mark3<33){
            printf("You have failed the examination due to less marks in individual subject.......!");
        }  
        else if((mark1+mark2+mark3)/3 <40){
            printf("You have failed the examination due to less percentage.......!");
        }
        else{
            printf("You have succesfully cleared the examination........!");
        }
        return 0;
    }