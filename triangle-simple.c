// Need to include files to ensure we are able to print values and take user input
#include <stdio.h>

int main() {
    // variable to store the length of the three sides
    int side1, side2, side3;

    // Input three sides of the triangle
    printf("Enter the three sides of the triangle: \n");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check if the sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Determine the type of triangle
        if (side1 == side2 && side2 == side3) {
            // When all the three sides are equal it is a Equilateral Triangle
            printf("The triangle is an Equilateral triangle.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            // When only two sides are equal it is a Isoceles triangle
            printf("The triangle is an Isosceles triangle.\n");
        } else {
            // When all sides are different it is a Scalene traingle
            printf("The triangle is a Scalene triangle.\n");
        }
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}