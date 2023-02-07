/*
    Gift Coupon Check

    Suresh had completed his monthly purchase and paid the bill. At customer desk there was an
    offer board which mentioned that if the bill numbers addition is divisible by 5, then they
    will get a Gift Coupon worth Rs.500. Write a program and Help Suresh to decide whether his
    bill number is eligible for Gift Coupon or not.

    Sample Input 1:
        Input a number
        12345
    Sample Output 1:
        Bill Number 12345 is Eligible For Gift Coupon

    Sample Input 2:
        Input a number
        12344
    Sample Output 2:
        Bill Number 12344 is Not Eligible For Gift Coupon 

    Input Explanation:
        1 <= Input number(n) < 100000
        1st line depicts the user to input a number
        2nd line depicts the input to a number 

    Output Explanation:
        Displays whether the sum of numbers is divisible by 5 or not.

*/

#include<stdio.h>

int main(){
    int billNum=2869, billSum = 0;

    printf("Enter bill number : ");
    scanf("%d", &billNum);   

    int cp = billNum;

    while(billNum != 0){
        int rem = billNum % 10;
        billSum += rem;
        billNum /= 10; 
    }

    if(billSum % 5){
        printf("Bill Number %d is Not Eligible For Gift Coupon", cp);
    }else{
        printf("Bill Number %d is Eligible For Gift Coupon", cp);
    }

    return 0;
}