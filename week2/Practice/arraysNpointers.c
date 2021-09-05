#include <stdio.h>

int main(void)
{
    int i, speed[3] = {50, 80, 120};

    printf("Element \t|\tAddress\t\t|\tValuen\n");

    for (i = 0; i < 3; i++)
    {
        printf("speed[%d]\t|\t%p\t|\t%d\n", i, &speed[i], speed[i]);
    }
}