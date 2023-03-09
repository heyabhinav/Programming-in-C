#include<stdio.h>

int main(){
    int i, n;
    int arr[10], *ptr = arr;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for(i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }

    printf("Elements are : ");
    for(i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }
    
    return 0;
}