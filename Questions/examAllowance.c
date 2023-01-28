#include<stdio.h>

int main(){

    int totalClasses;
    int attendClasses;
    char ml; //Medical leaves;

    printf("Enter total classes, classes attended and medical leaves(Y/N) : ");
    scanf("%d %d %c", &totalClasses, &attendClasses, &ml);

    //Typecasting
    float percentage = ((float) attendClasses)/totalClasses * 100;

    if(percentage < 75.0){
        if(ml=='y' || ml=='Y'){
            printf("You have attended %.2f%% classes. You are allowed to sit in the exam.",percentage);
        }else{
            printf("You have attended %.2f%% classes. You are not allowed to sit in the exam.",percentage);
        }
    }
    else{
            printf("You have attended %.2f%% classes. You are not allowed to sit in the exam.",percentage);
        }
    return 0;
}