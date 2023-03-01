/*
    He we'll start with the concepts of POINTERS. So, what's the basic definition of pointers? The answer
    to this question will be, 
    "A pointer is a variable that contains / stores / points to the memory location of another variable, 
    the variable to which we want to point or to access the value indirectly."

    Point to remember:
    --> A pointer can point to variable of same data type(in other word, pointer can store the address of
    variable of same data type).

    -->To declare a pointer variable we use "*" symbol, dereference operator.
        Syntax:
            <datatype> *<pointer_variable_name>;

        For example, to create pointer of integer type, we'll write - 
            int *pointerVar;

    -->To initialize a pointer we just store the address of the variable we want to point using
    reference operator (&).
        Syntax:
            <pointer_variable_name> = &<variable_name_to_be_pointed>;

        For example, to initialize pointer of integer type, we'll write - 
            pointerVar = &variable;

*/

#include<stdio.h>

int main(){
    int *pointer, var;

    var = 10;

    pointer = &var;

    printf("Accessing var(using var directly) : %d\n", var);
    printf("Accessing var(using pointer)      : %d\n", *pointer);
    printf("Value stored in pointer variable  : %d\n", pointer);
    printf("Address of variable var           : %d\n", &var);
    printf("Address of pointer variable       : %d\n", &pointer);

    printf("\n---You can see, address of var and value stored in pointer is same.---");

    return 0;
}