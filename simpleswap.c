#include <stdio.h>

int main() {
    int p, q, temp;

    // Input two integers
    printf("Enter two integers: \n");
    scanf("%d %d", &p, &q);

    // Display the values before swapping
    printf("Before swapping: p = %d, q = %d\n", p, q);

    // Swap the values using a temporary variable
    temp = p;
    p = q;
    q = temp;

    // Display the values after swapping
    printf("After swapping: p = %d, q = %d\n", p, q);

    return 0;
}