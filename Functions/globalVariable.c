#include<stdio.h>

int x = 10;

void print(){
    printf("\nThe value of x in the print() = %d", x);
}

int main(){
    printf("\nThe value of x in the main() = %d", x);

    int x=2;    
    printf("\nThe value of local variable x = %d", x);

    print();
    
    return 0;
}