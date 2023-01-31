/*
    WAP to convert time to minutes.

    Example:
        Input : 
            hour = 4
            minutes = 30

        Output :
            Total minutes = 270
*/
#include<stdio.h>

int convertTimeInMinutes(int hrs, int mins){
    mins = (hrs*60) + mins;
    return mins;
}

int main(){
    int hrs, minutes, totalMins;

    printf("Enter hours and minutes : ");
    scanf("%d %d", &hrs, &minutes);

    totalMins = convertTimeInMinutes(hrs, minutes);

    return 0;
}