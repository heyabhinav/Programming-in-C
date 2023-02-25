/*
    WAP to insert a string in a string at specified position.

    SAMPLE INPUT: 
        Enter text : how you?
        Enter string to be inserted : are
        Enter position at which string is to be inserted : 5

    SAMPLE OUTPUT:
        New string : how are you?
*/

#include<stdio.h>

int main(){
    char string[100], insertStr[100], newStr[200];
    int position=0;

    printf("Enter text : ");
    gets(string);

    printf("Enter string to be inserted : ");
    gets(insertStr);

    printf("Enter position at which string is to be inserted : ");
    scanf("%d", &position);

    int i=0, k=0, j=0;

    while(string[i] != '\0'){
        if(i==position-1){
            char temp = string[i];
            while(insertStr[k] != '\0'){
                newStr[j++] = insertStr[k++];
            }
            newStr[j++] = temp;
        }
        else{
            newStr[j++] = string[i];
        }
        i++;
    }

    newStr[j] = '\0';

    printf("New string : %s", newStr);

    return 0;
}