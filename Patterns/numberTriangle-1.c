/*

    WAP to print the following pattern for input n.

    SAMPLE INPUT
            n = 5

    SAMPLE OUTPUT
                1 
              1 2 1
            1 2 3 2 1
          1 2 3 4 3 2 1
        1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>

int main(){
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for(int s=0; s<(n-i-1); s++){
            printf("  ");
        }

        int j;
        for(j=1; j<=i+1; j++){
            printf("%d ", j);
        }

        for(j=j-2; j>=1; j--){
            printf("%d ", j);
        }

        printf("\n");
    }
    
    return 0;
}