/*
    WAP to take time as input from 6:00 AM to 8:00 PM, after reading the input display the 
    appropriate message from the following list.
    1. Good Morning!
    2. Good Afternoon!
    3. Good Evening!
    4. Good Night!

    SAMPLE INPUT:
        Enter hh:mm = 7:30 AM
    
    SAMPLE OUPUT:
        Good Morning!
*/

#include<stdio.h>

int main(){
    int hh, mm;
    char ch;
    int decider;
    printf("Enter hh:mm = ");
    scanf("%d:%d %c", &hh, &mm, &ch);

    if(hh>=6 && hh<12 && (ch=='a' || ch=='A')){
        decider = 1;
    }else if((hh>=12 && hh<4) && ch=='P' || ch=='p'){
        decider = 2;
    }else if((hh>=4 && hh<7) && (ch=='p' || ch=='P')){
        decider = 3;
    }else if((hh>=7 && hh<=8) && ch=='p' || ch=='P'){
        decider = 4;
    }

    switch(decider){
        case 1:
        printf("\nGood Morning!\n");
        break;
        case 2:
        printf("\nGood Afternoon!\n");
        break;
        case 3:
        printf("\nGood Evening!\n");
        break;
        case 4:
        printf("\nGood Night!\n");
        break;
        }

    return 0;
}