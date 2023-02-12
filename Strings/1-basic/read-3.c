/*
    Reading string using 'getchar()'.
*/
#include<stdio.h>

int main(){
    char name[20];

    printf("Enter name : ");
    char ch = getchar();
    int i;
    for(i=0; ch!='*'; i++)
    {
        name[i] = ch;
        ch = getchar();
    }

    name[i] = '\0';

    printf("Name : %s", name);
    
    return 0;
}