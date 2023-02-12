#include<stdio.h>

int main(){
    char name[20] = "Abhinav Gupta";

    printf("Name : %s\n", name); //will print all characters until '\0' reached
    printf("Name : %20s\n", name); // output width will be of 20 characters, right justified
    printf("Name : %-20s\n", name);// output width will be of 20 characters, left justified
    printf("Name : %20.7s\n", name); //will print only 7 characters,but output will be of 20 chars,right justified
    printf("Name : %-20.7s\n", name); //will print only 7 characters,but output will be of 20 chars,left justified
    return 0;
}