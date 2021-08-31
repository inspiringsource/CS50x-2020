#include <cs50.h>
#include <stdio.h>

//compiling w/ clang -o hello2 hello2.c -lcs50
int main(void)
{
    string answer = get_string("What's you name? ");
    printf("Hello, %s\n", answer);
}