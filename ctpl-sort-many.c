// Example programs by Prashant Joshi
// prashant.joshi@leapscale.com
// www.pgjoshi.com

#include <stdio.h>

int main() {
     // max 20 elements to be sorted
    // all elements are integers
    int arr[20], n, i, j, temp;
    // user decides the order
    // takes input in a char to check asc or desc
    // we need a choice to continue this whole thing or to stop
    char order, choice;

    do {
        // Input the number of elements
        printf("Enter the number of integers (up to 20): ");
        scanf("%d", &n);

        if (n > 20 || n <= 0) {
            printf("Invalid number of elements.\n");
            continue;
        }

        // Input the elements of the array
        printf("Enter %d integers: \n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Choose sorting order
        printf("Enter 'a' for ascending or 'd' for descending order: ");
        scanf(" %c", &order);

        // Sorting the array
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++) {
                if ((order == 'a' && arr[j] > arr[j+1]) || (order == 'd' && arr[j] < arr[j+1])) {
                    // Swap elements
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        // Display the sorted array
        printf("Sorted array: \n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Check if the user wants to continue with another array
        printf("Do you want to sort another array? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
