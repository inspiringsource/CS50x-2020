//in progress: CS50 IDE's File Browser - https://youtu.be/zYierUhIFNQ
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Taking String input https://manual.cs50.io/ 
    string answer = get_string("What's you name? ");
    printf("Goodbye, %s\n", answer);
}