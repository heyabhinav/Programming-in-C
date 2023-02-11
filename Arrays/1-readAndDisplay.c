/*
    WAP to read and display n numbers using an array.

    SAMPLE : 
        Enter number of elements : 5
        Arr[0] = 1
        Arr[1] = 2
        Arr[2] = 3
        Arr[3] = 4
        Arr[4] = 5
        The array elements are :
                Arr[0] = 1      Arr[1] = 2      Arr[2] = 3      Arr[3] = 4      Arr[4] = 5
*/
#include<stdio.h>

int main(){
    int arr[20], n;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array elements are :\n");

    for(int i=0; i<n; i++){
        printf("\tArr[%d] = %d", i, arr[i]);
    }
    return 0;
}