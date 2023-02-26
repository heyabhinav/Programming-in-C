/*
    WAP to replace every pattern in string with another pattern.

    SAMPLE INPUT:
        Enter string : AAA BBB CCC BBB 
        Enter pattern to be replaced : BBB
        Enter pattern to be replaced with : 2  

    SAMPLE OUTPUT:
        New String : AAA 2 CCC 2
*/

#include<stdio.h>
#include<string.h>

int main(){
    char string[100], replace[100], replaceWith[100], newString[200];

    printf("Enter string : ");
    gets(string);

    printf("Enter pattern to be replaced : ");
    gets(replace);

    printf("Enter pattern to be replaced with : ");
    gets(replaceWith);

    int i=0, k, j=0, n=strlen(replace), r=0, cpy=0, found=0;

    while(string[i] != '\0'){
        j = 0;
        k = i;
        if(string[k] == replace[j]){
            while(string[k]==replace[j] && replace[j]!=0){
                k++;j++;
            }
            if(replace[j] == '\0'){
                found = 1;
                cpy = 0;
                while(replaceWith[cpy] != '\0'){
                    newString[r++] = replaceWith[cpy++];
                }
            }
            if(!found){
                newString[r++] = string[i];
            }
        }
        else
            newString[r++] = string[k];
        i++;
    }

    newString[r] = '\0';
    printf("\nNew String : %s\n", newString);

    return 0;
}