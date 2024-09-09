// Example programs by Prashant Joshi
// prashant.joshi@leapscale.com
// www.pgjoshi.com

#include <stdio.h>

int main() {
    int arr[20], n, i, element, found = 0;

    // Input the number of elements
    printf("Enter the number of integers (up to 20): ");
    scanf("%d", &n);

    if (n > 20 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Input the elements of the array
    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Searching for the element
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Element found at index %d: %d\n", i, arr[i]);
            found = 1;
            break;
        }
    }

    // If element is not found
    if (!found) {
        printf("Element not found.\n");
    }

    return 0;
}
