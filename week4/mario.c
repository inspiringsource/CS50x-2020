#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int h)
{
    if (h==0) //adding a base case, the draw function will stop calling itself
    {
        return;
    }
    draw(h - 1); // process of recursive calls

    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}