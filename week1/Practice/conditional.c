#include <stdio.h>

int main (){
    int number;
    
    
    while (1){
        printf("Enter a number: ");
        scanf("%d", &number);

        //break if less than 0
        if (number < 0){
            printf("The number: %d is less than zero", number);
            break;
        }
                //break if greater than 0
                else if (number > 0){
            printf("The number: %d is greater than zero", number);
            break;
        }
        // else print accumulate sum
            printf("The number: %d is equal to zero", number);
            break;
    }
    printf("\nBye-bye\n");

    return 0;
}