/*
    WAP to delete the last element of an array.

    -- We cannot entirely delete the last element, but what we can do is that we can reduce the size
    of the array or change the value of the element such that it indicates that it is not an part of that 
    array. For instance, if we have array of positive integers then, changing the last element value to -1
    and reducing the size of array will indicate that its not an element of array.

    INPUT:
        Enter number of elements : 10
        Enter elements : 1 2 3 4 5 6 7 8 9 10

    OUTPUT:
        1 2 3 4 5 6 7 8 9
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

    //Changing the last value of array to -1.
    arr[n-1] = -1;

    //Decreasing the size of array by one because one element is removed from the array
    n--;

    //printing the array
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}