/*
    SAMPLE INPUT:
        Enter vowels only (first non-vowel character will stop the input) : ABHINAV
    SAMPLE OUTPUT:
        A

    SAMPLE INPUT:
        Enter vowels only (first non-vowel character will stop the input) : aeiouAEIOU
    SAMPLE OUTPUT:
        aeiouAEIOU
*/
#include<stdio.h>

int main(){
    char str[100];

    printf("Enter vowels only (first non-vowel character will stop the input) : ");
    scanf("%[aeiouAEIOU]", str);

    printf("%s", str);
    return 0;
}