/*
    *CONCEPT USED : FUNCTIONS*

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
    int hrs=0, minutes=0, totalMins;

    printf("Enter hours and minutes : ");
    scanf("%d %d", &hrs, &minutes);

    totalMins = convertTimeInMinutes(hrs, minutes);

    printf("Total minutes : %d", totalMins);

    return 0;
}