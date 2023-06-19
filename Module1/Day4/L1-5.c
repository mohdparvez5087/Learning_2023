#include <stdio.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12,90,77,10,48,55};
    int length = sizeof(arr) / sizeof(arr[0]);
    int evenIndexSum = 0;
    int oddIndexSum = 0;

    // Calculate the sum of even-indexed and odd-indexed elements
    int i;
    for (i = 0; i < length; i++) {
        if (i % 2 == 0) {
            evenIndexSum += arr[i];
        } else {
            oddIndexSum += arr[i];
        }
    }

    int difference = evenIndexSum - oddIndexSum;

    printf("Sum of Even-Indexed Elements: %d\n", evenIndexSum);
    printf("Sum of Odd-Indexed Elements: %d\n", oddIndexSum);
    printf("Difference: %d\n", difference);

    return 0;
}

