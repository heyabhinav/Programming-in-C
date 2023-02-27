/*
    WAP to delete every occurrance of a sub-string in the string.

    SAMPLE INPUT 1:
        Enter text : hello
        Enter string to be deleted : llo

    SAMPLE OUTPUT 1:
        New string is : he 

    SAMPLE INPUT 2:
        Enter text : occurrance
        Enter string to be deleted : rr

    SAMPLE OUTPUT 2:
        New string is : occuance 
*/

#include<stdio.h>

int main(){
    char string[100]="hell ll l ll o", subStr[100]="ll", newStr[200];

    printf("Enter text : ");
    gets(string);

    printf("Enter string to be deleted : ");
    gets(subStr);

    int i=0, k=0, j=0, r=0, cpy=0, found=0;

    for(i=0; string[i] != '\0'; i++){
        j = 0; k = i;
        if(string[k] == subStr[j]){
            found=0;
            while(string[k] == subStr[j] && subStr[j]!='\0'){
                k++; j++;
            }
            if(subStr[j] == '\0'){
                found = 1;

                //TO SKIP REST OF THE PATTERN
                while(i<k){
                    i++;
                }
                i--;
            }
            else if(!found){

                //TO GET SUBSTRING THAT HAS BEEN MISSED
                while(i<=k){
                    newStr[r++] = string[i];
                    i++;
                }
                i--;
            }
            
        }
        else{
            newStr[r++] = string[i];
        }
    }

    newStr[r] = '\0';

    printf("New string is : %s", newStr);

    return 0;
}