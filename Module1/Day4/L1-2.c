#include <stdio.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12,90,72,10,45,56};
    int length = sizeof(arr) / sizeof(arr[0]);  // Calculate the length of the array
    int min = arr[0];  // Initialize min with the first element
    int max = arr[0];  // Initialize max with the first element

    // Find the minimum and maximum
    for (int i = 1; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}

