//#include <cs50.h>
#include <stdio.h>


int main()
{
    //string s = "HI!"; //the CS50 convention
    char *s = "HI!";
    printf("%s\n", s);
    printf("%p points to the string\n", s); 
    //the first element of a string is equal to the address of the string
    printf("%p\t", &s[0]); 
    printf("%p\t", &s[1]);
    printf("%p\n", &s[2]);
    printf("%c\t\t", *s); //s[0]
    printf("%c\t\t", *(s+1));//s[1]
    printf("%c\n", *(s+2));//s[2]
}