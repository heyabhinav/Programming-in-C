#include<stdio.h>

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {0,2,4,6,8};
    int arr3[] = {0,3,6,9,12};

    int *ptr[3] = {arr1, arr2, arr3};

    for(int i=0; i<3; i++){
        printf("%d ", *ptr[i]);
    }
    return 0;
}