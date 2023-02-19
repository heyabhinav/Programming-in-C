/*
    WAP to shift all 0's first and then all 1's in an unsortedd array of 0's and 1's

    INPUT:
        Enter number of elements : 10
        Enter elements : 0 1 1 0 1 0 0 0 1 1

    OUTPUT:
        0 0 0 0 0 1 1 1 1 1

*/

#include<stdio.h>
#define MAX 100

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[MAX]={0}, n;

    //Size of array
    printf("Enter number of elements : ");
    scanf("%d", &n);
    
    //Elements of Array
    printf("Enter elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int cnt = 0,j=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            cnt++;
            arr[j++] = 0; 
        }
    }

    for(int i=0; i<(n-cnt); i++){
        arr[j++] = 1;
    }

    print(arr, n);
    return 0;
}