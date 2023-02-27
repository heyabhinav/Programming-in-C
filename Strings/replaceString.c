/*
    WAP to replace every pattern in string with another pattern.

    SAMPLE INPUT 1:
        Enter string : AAA BBB CCC BBB 
        Enter pattern to be replaced : BBB
        Enter pattern to be replaced with : 2  

    SAMPLE OUTPUT 1:
        New String : AAA 2 CCC 2

    SAMPLE INPUT 2:
        Enter string : AAA BB BB BBB CCC
        Enter pattern to be replaced : BBB
        Enter pattern to be replaced with : X 

    SAMPLE OUTPUT 2:
        New String : AAA BB BB X CCC
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

    int i=0, k, j=0, r=0, cpy=0, found=0;

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
                //TO SKIP REST OF THE PATTERN
                while(i<k){
                    i++;
                }
                i--;
            }
            else if(!found){
                //TO GET SUBSTRING THAT HAS BEEN MISSED
                while(i<=k){
                    newString[r++] = string[i];
                    i++;
                }
                i--;
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