#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("s: %c\t", *s);
    printf("t: %c\n", *t);

    if (strcmp(s, t)==0)//(*s==*t)
    {
        printf("Same\n");
    } else{
        printf("Different\n");
    }
}