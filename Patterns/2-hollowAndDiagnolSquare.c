/*
    WAP to print the following pattern.

    Pattern: 
            $ * * * $
            * $   $ *
            *   $   *
            * $   $ *
            $ * * * $
    
    Approach:
            We did similiar pattern before, so kindly refer to file - 1-hollowAndDiagnolSquare.c

            The only difference here is that we have to print both the diagnols.

            -> talking about other diagnol, when sum of i and j is equals to one more than n, i.e.
            So, print when (i+j) == n+1.
*/
#include<stdio.h>

int main(){
    int n=5;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if( (i == j) || (i+j == n+1))
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