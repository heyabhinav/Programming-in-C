/*
    WAP to print the position of the smallest of n numbers using arrays.

    SAMPLE INPUT:
        Enter number of elements : 5
        Enter elements : 2 4 5 3 1
    
    SAMPLE OUTPUT:
        The smallest element is : 1
        The position of smallest element is : 4
*/

#include<stdio.h>

int main(){
    int n, arr[50], smallest, pos;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    smallest = arr[0]; pos = 0;

    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            pos = i;
        }
    }

    printf("\nThe smallest element is : %d\n", smallest);
    printf("The position of smallest element is : %d", pos);

    return 0;
}