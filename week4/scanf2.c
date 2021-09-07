#include <stdio.h>

int main(void)
{
    char s[6]; //CS50 library automatically allocates memory to scanf
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}