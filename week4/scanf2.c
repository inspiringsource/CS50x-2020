#include <stdio.h>

int main(void)
{
    char s[6]; //Here (without CS50.h library) we have to declare an array size [6]
    printf("s: "); //with the CS50 library allocation of memory is automatic
    scanf("%s", s); 
    printf("s: %s\n", s);
}