#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE";

    for (int n = 0; n < 2; n++)
    {
        for (int i = 0; i < 4; i++)
        {


            if (words[n][i] != '\0')
                printf("%c\t|\t", words[n][i]);
            else if (words[n][i] == '\0')
                printf("\\0\t|\t");
        }
    }
    printf("\n");
}