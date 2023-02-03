/*
    Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.
    
	Sample Output:
        1.	Input 1 for area of circle                                                                                    
        2.	Input 3 for area of triangle                                                                                  
        3.	Input your choice : 1                                                                                         
        4.	Input radious of the circle : 5                                                                               
        5.	The area is : 78.500000

*/

#include<stdio.h>

int main(){

    printf("1.Area of Circle\n2.Area of Triangle\n");

    int ch;

    printf("Enter choice : ");
    scanf("%d", &ch);

    switch(ch){
        case 1:{
                float radius=0;
                printf("Enter radius :");
                scanf("%f", &radius);
                printf("Area : %.2f", (3.14*radius*radius));
                break;
            }
            
        case 2:{
                float base, height;
                printf("Enter base and height: ");
                scanf("%d %d", &base, &height);

                printf("Area : %f\n", (0.5*base*height));
                break;
        }
        default:{
                printf("Invalid choice!");
        }
    }
    return 0;
}