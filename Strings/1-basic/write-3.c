#include<stdio.h>

int main(){

    char name[20] = "Abhinav Gupta";
    int i;

    printf("Name : ");
    for(i=0; name[i]!='\0'; i++){
        putchar(name[i]);
    }
    return 0;
}