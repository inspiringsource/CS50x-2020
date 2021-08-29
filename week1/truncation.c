//in progress: Syntactic Sugar - https://youtu.be/zYierUhIFNQ?t=5141
#include <cs50.h>
#include <stdio.h>

int main(void){
    //get input from user
    int x = get_int("x: ");
    int y = get_int("y: ");

    //division  
    float z = (float) x / (float) y;

    //print result
    printf("%f\n", z);
}