#include<stdio.h>

int main(){
    char str[100];

    printf("Enter vowels only (first non-vowel character will stop the input) : ");
    scanf("%[aeiouAEIOU]", str);

    printf("%s", str);
    return 0;
}