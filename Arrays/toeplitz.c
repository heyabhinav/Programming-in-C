/*
    WAP to check whether the matrix is toeplitz matrix or not.
*/

#include<stdio.h>

int main(){
    int arr[10][10], n=0, flag = 1, i=0, j=0;

    printf("Enter size of NxN matrix (MAX 10) : ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j && i>0){
                if(arr[i][j] != arr[i-1][j-1]){
                    flag = 0;
                    break;
                }
            }
            else if(i<j && i>0){
                if(arr[i][j] != arr[i-1][j-1]){
                    flag = 0;
                    break;
                }
            }
            else if(i>j && j>0){
                if(arr[i][j] != arr[i-1][j-1]){
                    flag = 0;
                    break;
                }
            }
        }
        if(!flag){
            printf("FALSE.");
            return 0;
            break;
        }
    }

    printf("TRUE.");

    return 0;
}