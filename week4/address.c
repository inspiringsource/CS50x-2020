#include <stdio.h>

int main()
{
    int n = 50;  //create a value of 50 labeled n
    int *p = &n; //declare a variable, p, that has the type of *, a pointer

    printf("---------------\n->Variable n\n---------------\n");
    printf("%p\n", &n); //%p is the format code for an address and & operator get the address of the variable
    printf("%i\n", n);  //print out the value of n
    printf("---------------\n->Variable p\n---------------\n");
    printf("%p\n", p);
    printf("%i\n", *p); //* operator the dereference operator lets us “go to” the location that a pointer is pointing to
}