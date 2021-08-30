#include <stdio.h>

//prototype
void meow(int n);


int main(void)
{
    meow(5);
}

void meow(int n){
    for(int i=0; i<n; i++){
    printf("meow\n");
    }
}