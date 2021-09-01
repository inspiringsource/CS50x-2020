#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%s\n", s);
    printf("%c %c %c %c\n", s[0], s[1], s[2], s[3]);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    //we access the string string, chart, ASCII chart
    //s[0] s[1] s[2] s[3]
    // H    I     !   \0
}