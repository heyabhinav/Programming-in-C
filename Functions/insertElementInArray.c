/*
    WAP to insert element in an array at given position using a function.

    -------REFER TO FILE insertElement-3 PRESENT IN ARRAYS FOLDER.-------
*/

#include<stdio.h>
#define MAX 100

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return;
}

//The function returns the size of the array after updating it.
int insertElementAtPosition(int arr[], int n, int ele, int pos){
    for(int i=n; i>pos-1; i--){
        arr[i] = arr[i-1];
    }

    arr[pos-1] = ele;

    return ++n;
}

int main(){
    int arr[MAX]={0}, n, ele, pos;
  
    printf("Enter number of elements : ");//Size of array
    scanf("%d", &n);
   
    printf("Enter elements : ");//Elements of Array
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }  
    printf("Enter new element : "); //New element to be inserted
    scanf("%d", &ele);
 
    printf("Enter position : ");//Position where element is to be inserted
    scanf("%d", &pos);

    /*Function returns the size of the array after inserting the element. We are capturing this value in
    variable 'n' so that we get the updated size of array.*/
    n = insertElementAtPosition(arr, n, ele, pos);

    print(arr, n);

    return 0;
}