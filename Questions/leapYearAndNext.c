#include<stdio.h>

int main(){

    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    if(year%4==0 && (year%100 || year%400==1)){
        printf("%d is a leap year.", year);
    }
    else{
        if(year%4){
            year += year%4;
        }
        else{
            year += 4;
        }

        printf("No, next leap year will be %d.", year);
    }
    return 0;
}