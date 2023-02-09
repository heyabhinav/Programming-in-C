/*
    Illustration of break and continue statement.

    Program to display square root of a number.
    --We're using sqrt() function, which is present in math.h header file.
*/

#include<stdio.h>
#include<math.h>

int main(){
      int num;
      do{
           printf("Enter any number. Enter -999 to stop : ");
           scanf("%d", &num);
           if(num == -999)
               break;
           if( num < 0 ){
               printf("Square root of negative number not defined\n");
               continue;
          }
          printf("Square root of %d is %f\n", num, sqrt(num));
      }while(1);
      return 0;
}
