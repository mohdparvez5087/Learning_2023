#include <stdio.h>

void reverseArray(int arr[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap the elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end indices towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[] = {64, 84, 20, 36, 12,90,72,10,45,56};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    int i;
    for(i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    // Reverse the array
    reverseArray(arr, length);

    printf("\nReversed Array: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

