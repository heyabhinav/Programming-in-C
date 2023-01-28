/*
    Convert Decimal To Binary using bitwise operator.
*/
#include<stdio.h>

int main(){
    int num = 10;

    for(int i=4; i>=0; i--){
        int k = num >> i;
        if (k & 1){
            printf("1");
        }else{
            printf("0");
        }
        
    }
    return 0;
}