#include<stdio.h>

int main(){
    int arr[100] = {1,2,3,4,5};
    int n = 5;

    // printf("Enter n: ");
    // scanf("%d", &n);
    // printf("Enter elements : ");
    // for(int i=0; i<n; i++){
    //     scanf("%d", arr[i]);
    // }

    int shift = 2;
    // printf("Enter shift : ");
    // scanf("%d", &shift);

    shift = shift % n;

    int p = 1;
    while (p <= shift) {
        int last= arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}