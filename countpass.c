// Example programs by Prashant Joshi
// prashant.joshi@leapscale.com
// www.pgjoshi.com

#include <stdio.h>

int main() {
    int marks[20], n, i, passingMarks, passCount = 0, failCount = 0;

    // Input the number of marks (up to 20)
    printf("Enter the number of marks (up to 20): ");
    scanf("%d", &n);

    if (n > 20 || n <= 0) {
        printf("Invalid number of marks.\n");
        return 1;
    }

    // Input the marks
    printf("Enter %d marks: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Input the passing marks
    printf("Enter the passing marks: ");
    scanf("%d", &passingMarks);

    // Count the number of passing and failing marks
    for (i = 0; i < n; i++) {
        if (marks[i] >= passingMarks) {
            passCount++;
        } else {
            failCount++;
        }
    }

    // Display the results
    printf("Number of passed students: %d\n", passCount);
    printf("Number of failed students: %d\n", failCount);
    printf("Total number of students: %d\n", n);

    return 0;
}
