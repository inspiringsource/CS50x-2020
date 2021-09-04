#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number; /* data */
} person;

int main(void)
{
    person people[2];

    people[0].name = "Brain";
    people[0].number = "+1-617-495-1000";
    
    people[1].name = "David";
    people[1].number = "+1-666-555-2750";


    for (int i; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found!!!\n");
    return 1;
}