/*
    WAP to print the following pattern.

    SAMPLE INPUT
            n = 5

    SAMPLE OUTPUT
                1 
              2 3 2 
            3 4 5 4 3 
          4 5 6 7 6 5 4 
        5 6 7 8 9 8 7 6 5 
*/

#include<stdio.h>

int main(){
    int n=5;

    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int s=0; s<(n-i-1); s++)
            printf("  ");
        
        int j;
        for(j=i+1; j<(2*i + 2); j++){
            printf("%d ",j);
        }

        for(int k=j-2; k>=i+1; k--){
            printf("%d ", k);
        }

        printf("\n");
    }
}