#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1; //list=1;
    list[1] = 2; //(list+1)=2;
    list[2] = 3; //(list+2)=3;
    // ^^ Same thing ^^

    //re-allocating more memory c

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", list[i]);
    }
    free(list);
}