/*
    WAP to delete an element of an array from a given position.

    -------REFER TO FILE deleteElement-3 PRESENT IN ARRAYS FOLDER.-------
*/


#include<stdio.h>
#define MAX 100

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return;
}

int deleteElementFromPosition(int arr[], int n, int pos){
    for(int i=pos-1; i<n; i++){
        arr[i] = arr[i+1];
    }

    return --n;
}

int main(){
    int arr[MAX]={0}, n, pos;
  
    printf("Enter number of elements : ");//Size of array
    scanf("%d", &n);
   
    printf("Enter elements : ");//Elements of Array
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }  
 
    printf("Enter position : ");//Position of the element to be deleted
    scanf("%d", &pos);

    /*Function returns the size of the array after deleting the element. We are capturing this value in
    variable 'n' so that we get the updated size of array.*/
    n = deleteElementFromPosition(arr, n, pos);

    print(arr, n);
    return 0;
}