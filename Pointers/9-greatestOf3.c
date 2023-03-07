/*
    WAP, using functions, to find the biggest of three numbers.
*/

#include<stdio.h>

int greater(int *a, int *b, int *c){
    int *larger = NULL;
    if(*a > *b && *a > *c)
        return *a;
    if(*b > *a && *b > *c)
        return *b;
    else
        return *c;
    
}

int main(){
    int num1, num2, num3, larger;

    printf("Enter numb1 : ");
    scanf("%d", &num1);
    printf("Enter numb2 : ");
    scanf("%d", &num2);
    printf("Enter numb3 : ");
    scanf("%d", &num3);

    larger = greater(&num1, &num2, &num3);

    printf("Largest : %d", larger);
    return 0;
}