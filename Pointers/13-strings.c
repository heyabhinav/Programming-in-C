#include<stdio.h>

int main(){
    char str[] = "Hello";
    char *ptr;;

    ptr = str;

    printf("The string is: ");
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}