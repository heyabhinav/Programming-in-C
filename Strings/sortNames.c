/*
    WAP to sort the names of employees of a company in ascending order.
*/

#include<stdio.h>
#include<string.h>

int main(){
    char names[10][30], temp[30];
    int n;

    printf("Enter number of names : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s ", names[i]);
    }

    for(int i=0; i<n; i++){
        printf("%s ", names[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n-i-1; j++){
            if(strcmp(names[i], names[j]) > 0){
                strcpy(temp, names[i]); 
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted : \n");
    for(int i=0; i<n; i++){
        printf("%s ", names[i]);
    }
    return 0;
}