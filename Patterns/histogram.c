#include<stdio.h>

// void print(int arr[][], int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("%d ", arr[i][j]);
//         }
//     }
// }

int main(){
    int n=4;
    int arr[] = {5,2,6,1};

    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            if(arr[j] == max){
                printf("%d ", arr[j]);
                // printf("* ");
                arr[j]--;
            }
            else
                printf("  ");
        }
        printf("\n");
        max--;
    }
 

}