#include <stdio.h>

int main (){
    int number, sum = 0;
    
    
    while (1){
        printf("Enter a positive number: ");
        scanf("%d", &number);

        //break if smaller than 0
        if (number < 0){
            break;
        }
        // else print accumulate sum
        sum = sum + number;
    }
    printf("sum = %d\n", sum);

    return 0;
}