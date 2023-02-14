/*
    WAP to change the lowercase alphabet present in a string to uppercase.
*/

#include<stdio.h>
#define MAX 100

int main(){
    char str[MAX];

    printf("Enter string : ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);
    return 0;
}