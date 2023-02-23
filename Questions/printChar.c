/*
    WAP that takes an alphabet as an input and the following pattern.

    *NOTE:- The should not print the blank space after the last element in each row.*

    SAMPLE INPUT:
        F
    
    SAMPLE OUTPUT:
        A
        B B
        C C C
        D D D D
        E E E E E
        F F F F F F
*/

#include<stdio.h>

int main(){
    char ch;
    int i=0, j=0;

    printf("Enter character : ");
    scanf("%c", &ch);

    for(i=65; i<ch+1; i++){
        for(j=65; j<=i; j++){
            printf("%c", i);
            if(i>j){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}