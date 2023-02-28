#include<stdio.h>
#include<string.h>

int main(){

    float num; 
    
    int binaryInt[50], i=0;
    int binaryFloat[50], j=0;

    printf("Enter number : ");
    scanf("%f", &num);

    int intPart = num / 1;
    float floatPart = num - intPart;

    while(intPart != 0){
        int rem = intPart % 2;
        intPart = intPart / 2;
        binaryInt[i++] = rem;
    }
    while(i != 0){
        printf("%d", binaryInt[--i]);
    }

    printf(".");
    // printf("%s", strrev(a));
    while(floatPart != 0.00){
        int res = floatPart * 2;
        binaryFloat[j++] = res;
        floatPart = floatPart*2 - res;
    }
    binaryFloat[j] = -1;
    j = 0;
    while(binaryFloat[j] != -1){
        printf("%d", binaryFloat[j++]);
    }
    
    return 0;
}