#include <stdio.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12,90,77,10,48,55};
    int length = sizeof(arr) / sizeof(arr[0]);
    int evenSum = 0;
    int oddSum = 0;

    // Calculate the sum of even and odd elements
    int i;
    for (i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    int difference = evenSum - oddSum;

    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    printf("Difference: %d\n", difference);

    return 0;
}

