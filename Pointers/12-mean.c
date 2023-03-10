#include<stdio.h>

int main(){
    int i, n, arr[20], sum = 0;
    int *pn = &n, *parr = &arr[0], *psum = &sum;
    float mean = 0.0, *pmean = &mean;

    printf("Enter number of elements : ");
    scanf("%d", pn);

    printf("Enter elements : ");
    for(i=0; i<*pn; i++){
        scanf("%d", (parr+i));
    }

    for(i=0; i<*pn; i++){
        *psum += *(parr + i);
    }

    *pmean = (float) *psum / *pn;

    printf("The sum is : %d\n", *psum);
    printf("The mean is : %.2f\n", *pmean);

    return 0;
}