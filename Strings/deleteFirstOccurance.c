/*
    WAP to delete the first occurrance of pattern in string with another pattern.

    SAMPLE INPUT:
        Enter text : Weather is nice
        Enter string to be deleted : Weat

    SAMPLE OUTPUT:
        New string : her is nice
*/

#include<stdio.h>

int main(){
    char string[100], subStr[100], newStr[200];

    printf("Enter text : ");
    gets(string);

    printf("Enter string to be deleted : ");
    gets(subStr);

    int i=0, k=0, j=0, n=0, cpy=0;

    while(string[i]!='\0'){
        j=0; k=i;
        while(string[k] == subStr[j] && subStr[j]!='\0'){
            k++;j++;
        }
        if(subStr[j]=='\0'){
            cpy = k;
        }
        newStr[n] = string[cpy];
        i++;
        cpy++;
        n++;
    }

    newStr[n] = '\0';

    printf("New string : %s", newStr);
    
    return 0;
}