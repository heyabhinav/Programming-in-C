/*
    WAP to take a string as a input from the user and display the count of alphabets, digits, blank space
    and special character present in that string.

    Approach-
    1)There many ways to do the same, here I have used ctype.h header file to use the function defined in that file
    to check the characters.
    2)Another way can be that, check characters using there ASCII value to determine the character and increase the
    counter.
*/

#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];

    printf("Enter string : ");
    gets(str);

    int alpha = 0, special = 0, num = 0, blank = 0;

    for(int i=0; str[i]!='\0'; i++){
        if( isalpha(str[i]) > 0 ){
            alpha++;
        }
        else if( isdigit(str[i]) > 0 ){
            num++;
        }
        else if( isblank(str[i]) > 0 ){
            blank++;
        }
        else{
            special++;
        }
    }

    printf("Alphabets : %d\nDigits : %d\nBlanks : %d\nSpecial Characters : %d\n", alpha, num, blank, special);

    return 0;
}