// kepp taking as input form user until user enter a odd number 
#include<stdio.h>
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter number: ");
        scanf("%d", &num);
        printf("%d", num);

        // Break the loop if the number is odd
        if (num % 2 != 0) {
            break;
        }

    } while (1);  // Infinite loop, broken by condition above

    printf("\nYou enterd odd number");

    return 0;
}
