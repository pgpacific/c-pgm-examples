#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Single if statement (multiple conditions)
    if (num > 0 && num % 2 == 0) {
        printf("The number is positive and even.\n");
    }

    return 0;
}
