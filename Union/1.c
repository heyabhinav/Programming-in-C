#include<stdio.h>

union datatype{
    int x;
    char ch;
};

int main(){
    union datatype u1;

    u1.x = 65;
    printf("%d %c\n", u1.x, u1.ch);

    u1.ch='a';
    printf("%d %c", u1.x, u1.ch);

    return 0;
}