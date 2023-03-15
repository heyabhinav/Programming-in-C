#include<stdio.h>

char *dayOfWeek(int day){
    char *week_day[7] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};

    if(day>=1 && day<=7){
        return week_day[day-1];
    }
    return NULL;
}

int main(){
    int day_num;
    char *day;

    printf("Enter the day from 1 to 7: ");
    scanf("%d", &day_num);

    day = dayOfWeek(day_num);

    if(day){
        printf("%s", day);
    }
    else{
        printf("Invalid Day");
    }
    
    return 0;
}