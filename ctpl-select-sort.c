// Example programs by Prashant Joshi
// prashant.joshi@leapscale.com
// www.pgjoshi.com

#include <stdio.h>

int main() {
    int arr[20], n, i, j, minIndex, temp;

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

    // Selection sort algorithm to sort the array in ascending order
    for (i = 0; i < n-1; i++) {
        // Assume the current index is the minimum
        minIndex = i;

        // Find the smallest element in the remaining array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the current element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        
        // Intermediate condition
        printf("Array is: ");
        for (int z = 0; z < n; z++) {
        printf("%d ", arr[z]);
        }
        printf("\n");
    }

    // Display the sorted array
    printf("Sorted array in ascending order: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
