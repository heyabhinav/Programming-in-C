/*
    WAP to append a string to another string.

    SAMPLE INPUT:
        Enter source string :  World
        Enter destination string : Hello
        
    SAMPLE OUTPUT:
        After appending string : Hello World
*/

#include<stdio.h>
#define MAX 100

int main(){
    char destination[MAX], source[MAX-50];
    int i=0, j=0;

    printf("Enter source string : ");
    gets(source);
    printf("Enter destination string : ");
    gets(destination);

    while(destination[i] != '\0'){
        i++;
    }

    while(source[j] != '\0'){
        destination[i++] = source[j++];
    }

    destination[i] = '\0';

    printf("After appending string : %s", destination);

    return 0;
}