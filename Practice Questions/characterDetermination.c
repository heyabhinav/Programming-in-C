/*
    Question - WAP to determine the character entered by the user.

    Solution:
    We'll be using 'ctype.h' header file to determine the character entered.
    ->The C <ctype.h> header file declares a set of functions to classify (and transform) individual characters.
    ->These functions take the int equivalent of one character as parameter and return an int representing a boolean value: an int value of 0 means false, and an int value different from 0 means true.

    Funtions:
    -> isalnum() = checks if character is alphanumeric
    -> isalpha() = checks if character is alphabetic
    -> isblank() = checks if character is blank
    -> iscntrl() = checks if character is a control character
    -> isdigit() = checks if character is decimal digit
    -> isgraph() = checks if character has graphical representation
    -> islower() = checks if character is lowercase letter
    -> isprint() = checks if character is printable
    -> ispunct() = checks if character is a punctuation character
    -> isspace() = checks if character is a white-space
    -> isupper() = checks if character is uppercase letter
    -> isxdigit() = checks if character is hexadecimal digit

    Example code below:
*/

#include<stdio.h>
#include<ctype.h>

int main(){

    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    printf("\n****************************\n");

    if( isalpha(ch) > 0 )
        printf("\'%c\' is a alphabet\n", ch);
    if( isdigit(ch) > 0 )
        printf("\'%c\' is a digit\n", ch);
    if( isprint(ch) > 0 )
        printf("\'%c\' is a printable character\n", ch);
    if( ispunct(ch) > 0 )
        printf("\'%c\' is a punctutaion mark\n", ch);
    if( isspace(ch) > 0 )
        printf("\'%c\' is a white space\n", ch);

    return 0;
}

