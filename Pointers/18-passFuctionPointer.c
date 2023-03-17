#include<stdio.h>

int add(int a, int b){
    return (a+b);
}

int sub(int a, int b){
    return (a-b);
}

int operate(int (*fp)(int, int), int a, int b){
    int result = fp(a,b);
    return result;
}

int main(){
    int n1 = 2, n2 = 1;

    int r = operate(add, n1, n2);
    printf("Add = %d\n", r);

    r = operate(sub, n1, n2);
    printf("Sub = %d", r);

    return 0;
}