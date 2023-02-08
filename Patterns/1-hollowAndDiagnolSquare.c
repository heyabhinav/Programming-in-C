/*
    WAP to print the following pattern.

    Pattern: 
            $ * * * *
            * $     *
            *   $   *
            *     $ *
            * * * * $
    
    Approach:
            To print hollow square, we need to print characters at the edges only
            i.e., print when i==1(if loops starts from 1) and i==n, where n defines the number rows and columns.
            this will print for rows, to print for the columns, we've to print when j==1 and j==n.

            Now, for the diagnols, the logic is when i and j are same, here we're talking about principal diagnol.
            So, print when i==j.
*/

#include<stdio.h>

int main(){
    int n=5;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if( i == j )
                printf("$ ");
            else if( i==1 || i==n || j==1 || j==n )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}