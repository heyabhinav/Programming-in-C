/*
    WAP to replace the first occurrance of pattern in string with another pattern.

    SAMPLE INPUT:
        Enter string : AAA BBB CCC BBB 
        Enter pattern to be replaced : BBB
        Enter pattern to be replaced with : 2  

    SAMPLE OUTPUT:
        New String : AAA 2 CCC BBB
*/

#include<stdio.h>

int main(){
    char string[100], replace[100], replaceWith[100], newString[200];

    printf("Enter string : ");
    gets(string);

    printf("Enter pattern to be replaced : ");
    gets(replace);

    printf("Enter pattern to be replaced with : ");
    gets(replaceWith);

    int i=0, k, j, n=0, r=0, cpy=0;

    while(string[i] != '\0'){
        k=i, j=0;
        while(string[k] == replace[j] && replace[j]!='\0'){
            k++; j++;
        }
        if(replace[j]=='\0'){
            cpy = k;
            while(replaceWith[r]!='\0'){
                newString[n++] = replaceWith[r++];
            }
        }
        newString[n++] = string[cpy++];
        i++;
    }

    newString[n] = '\0';
    printf("\nNew String : %s\n", newString);

    return 0;
}