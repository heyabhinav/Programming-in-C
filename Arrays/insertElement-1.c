/*
    WAP to insert an element at the beginning of an array.

    INPUT:
        Enter number of elements : 10
        Enter elements : 1 2 3 4 5 6 7 8 9 10
        Enter new element : 11

    OUTPUT:
        11 1 2 3 4 5 6 7 8 9 10 
*/

#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX], size;

    //Size of array
    printf("Enter number of elements : ");
    scanf("%d", &size);
    
    //Elements of Array
    printf("Enter elements : ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //New element to be inserted
    int ele;
    printf("Enter new element : ");
    scanf("%d", &ele);

    for(int i=size; i>=0; i--){
        arr[i] = arr[i-1];
    }

    //Adding element at 0th index(starting of an array)
    arr[0] = ele;

    //Increasing the by one because new element is added in the array
    size++;

    //printing the array
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}