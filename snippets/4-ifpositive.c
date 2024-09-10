#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Single if statement (single condition)
    if (num > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}