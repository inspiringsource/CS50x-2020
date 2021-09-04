#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Brain", "David"};
    string number[] = {"+1-617-495-1000", "+1-666-555-2750"};

    for (int i; i < 2; i++)
    {
        if (strcmp(names[i], "David") == 0)
        {
            printf("Found: %s\n", number[i]);
            return 0;
        }
    }

    printf("Not found!!!\n");
    return 1;
}