/*
    Write a C program to input basic salary of an employee and calculate its Gross salary according to 
    following:

    Basic Salary <= 10000: HRA = 20%, DA = 80%
    Basic Salary <= 20000 : HRA = 25%, DA = 90%
    Basic Salary > 20000 : HRA = 30%, DA = 95%

*/
#include<stdio.h>

int main(){
    float bs, hra, da, gs;

    printf("Enter basic salary : ");
    scanf("%f", &bs);

    if (bs<=10000){
        hra = 20.0/100.0 * bs;
        da = 80.0/100.0 * bs;  
    }
    else if (bs>10000 && bs<=20000){
        hra = 25.0/100.0 * bs;
        da = 90.0/100.0 * bs; 
    }
    else if(bs>20000){
        hra = 30.0/100.0 * bs;
        da = 95.0/100.0 * bs; 
    }

    gs = bs + hra + da;

    printf("Gross Salary : %.2f", gs);

    return 0;

}