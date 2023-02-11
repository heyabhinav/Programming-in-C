/*
    WAP to read n of numbers and display them in reverse order.

    Sample Input:
        Enter number of elements : 5
        Enter elements : 1 2 3 4 5


    Sample Output:
        Reverse Order : 5 4 3 2 1 
*/

#include<stdio.h>

int main(){
    int arr[50], n;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Reverse Order : ");
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}