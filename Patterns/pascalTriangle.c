/*
    WAP to print the Pasacal Triangle.

    -->Pascal's triangle is the triangular array of numbers that begins with 1 on the top and with 1's
    running down the two sides of a triangle. Each new number lies between two numbers and below them,
    and its value is the sum of the two numbers above it.

    We're using 2-dimentional array in this pattern printing as we require past data to calculate new data.

    Pattern : 
        for n = 5
                      1
                    1   1
                  1   2   1
                1   3   3   1
              1   4   6   4   1
*/

#include<stdio.h>

int main(){

    int n=5;

    printf("Enter n : ");
    scanf("%d", &n);

    int arr[10][10];
    int row=2, col;

    arr[0][0] = arr[1][0] = arr[1][1] = 1;

    for(int row=2; row<n; row++){
        arr[row][0] = arr[row][row] = 1;

        for(int col=1; col<row; col++){
            arr[row][col] = arr[row-1][col-1] + arr[row-1][col];
        }
    }

    //for printing triangle from 2D Array
    for(int i=0; i<n; i++){
        for(int s=0; s<(n-i-1); s++)
            printf("  ");
        for(int j=0; j<=i; j++)
            printf("%d   ", arr[i][j]);
        printf("\n");
    }
    return 0;
}