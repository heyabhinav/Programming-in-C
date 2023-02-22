/*
    WAP to print the followling pattern.

    SAMPLE INPUT:
        4
    SAMPLE OUPUT:
        7 8 9 10
        4 5 6
        2 3
        1

    Approach:
        Problem here is that it is little complicated to calculate from where to start printing the pattern.
        Lets draw the pattern in the box see if we can find some pattern-

        1) Lets index the row in reverse

        4th   3  | 7 | 8 | 9 | 10
        3rd   2  | 4 | 5 | 6 |   
        2nd   1  | 2 | 3 |   |
        1st   0  | 1 |   |   |

        Some pattern we can notice here is that:

            (last row element) - (first row element) = index value

            10 - 7 = 3
             6 - 4 = 2
             3 - 2 = 1
             1 - 1 = 0

        if you can notice here, sum of all integers till (index+1) = last element of that row.
        We are somewhat getting the pattern now. 

        So, finally we can calculate initial value now. i.e.,

        [sum of 1 to (index + 1)] - index = initial value.

        [(n*(n+1)) / 2] - (n-1) = initial value
        
        for n=4;
            [(4*5) / 2] - (3) = 10 - 3 = 7(initial value).


*/
#include<stdio.h>

int main(){
    int n=5;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    int index = n;
    for(int i=0; i<n; i++){
        int k = ((index * (index + 1))/2) - (index-1);

        for(int j=0; j<=n-i-1; j++){
            printf("%d ", k++);
        }
        index--;
        printf("\n");
    }
    return 0;
}