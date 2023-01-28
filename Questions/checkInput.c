/*
    CHECK INPUT

    if input is an alphabet print 0
    if input is a number print 1
    if input is a special character print 2
*/

#include<stdio.h>

int main(){
    char ch;

    printf("Enter : ");
    scanf("%c", &ch);

    if( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ){
        printf("0");
    }else if(ch>='0' && ch<='9'){
        printf("1");
    }else{
        printf("2");
    }

    return 0;
}