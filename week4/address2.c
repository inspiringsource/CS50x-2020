#include <cs50.h>
#include <stdio.h>


int main()
{
    string s = "HI!"; //equal char *s = "HI!";
    printf("%s\n", s);
    printf("%p\t", s); //string points to the first element
    printf("%p\t", &s[0]);
    printf("%p\t", &s[1]);
    printf("%p\n", &s[2]);
}