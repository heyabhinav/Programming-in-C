#include<stdio.h>

int main(){
    //Creating array containing 2 rows, 2 columns and 3 layers.
    int arr[2][2][3];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                printf("Enter value for arr[%d][%d][%d] : ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                printf("Element at arr[%d][%d][%d] is : %d\n",i, j, k, arr[i][j][k]);
            }
        }
    }
    return 0;
}