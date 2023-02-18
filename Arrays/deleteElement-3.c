/*
    WAP to delete the first element of an array.

    INPUT:
        Enter number of elements : 10
        Enter elements : 1 2 3 4 5 6 7 8 9 10
        Enter position : 5

    OUTPUT:
        1 2 3 4 6 7 8 9 10
*/

#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX], n;

    //Size of array
    printf("Enter number of elements : ");
    scanf("%d", &n);
    
    //Elements of Array
    printf("Enter elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Position where element is to be inserted
    int pos;
    printf("Enter position : ");
    scanf("%d", &pos);

    //overwriting the element by next element from 'pos-1' till 'n-1'
    for(int i=pos-1; i<n; i++){
        arr[i] = arr[i+1];
    }

    //Decreasing the size of array by one because one element is removed from the array
    n--;

    //printing the array
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}