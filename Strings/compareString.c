/*
    WAP to compare two strings.
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char str1[50], str2[50];

    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);

    int len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);

    int i=0;
    bool same = false;
    if(len1 == len2){
        while( i < len1){
            if( str1[i] == str2[i] ){
                i++;
            }
            else{
                break;
            }
        }
        if(i == len1){
            same = true;
            
        }
    }

    if(same==1){
        printf("The two strings are equal.\n");
    }
    else{
        printf("The two strings are not equal.\n");
        if(str1[0] > str2[0]){
            printf("First string is greater.");
        }
        else if(str1[0] < str2[0]){
            printf("Second string is greater.");
        } 
    }

      

    return 0;
}