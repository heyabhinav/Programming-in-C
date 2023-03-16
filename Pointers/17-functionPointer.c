#include<stdio.h>

void print(int value){
    printf("%d\n", value);
}

void (*fp)(int);

int main(){
    fp = print;
    
    (*fp)(10);
    fp(20);

    return 0;
}