/*
    Patterns printing is one of the application of nested loops.
    ->It helps the one works on his/her logic building skills and stronger their concepts around loops.

    Inititally we'll check the pattern given below and logics applied in doing so.
        PATTERN :   *
                    * *
                    * * *
                    * * * *
    
    For the above pattern, input would be 4 as number of rows present is 4.

    Approach : 
    Imagine a 4x4 block, i.e. 4 rows and 4 columns, and index them, either from 0 or 1..your choice.
    I'll choose 0.

                  0  1  2  3
            0   |  |  |  |  |
            1   |  |  |  |  |
            2   |  |  |  |  |
            3   |  |  |  |  |

    Now, put the pattern inside this block.

                 --->  j --->
                  0   1   2   3
        i   0   | * |   |   |   |
        |   1   | * | * |   |   |
        |   2   | * | * | * |   |
        \/  3   | * | * | * | * |
        
    After doing so, check for the patterns or raltions that can be build between i & j.
    Here, the relation which can be seen is that, 
    print '*' until j less than and equals to i, i.e -- > j <= i

    *This is the basic approach that can be choosed while dealing with pattern problem.
    Some changes might be need based on the problem.*

    Lets code this now.
*/

#include<stdio.h>

int main(){

    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}