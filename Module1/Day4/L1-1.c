#include <stdio.h>

int main() {
    int arr[] = {12, 84, 20, 36, 64, 56,72,10,45,90};
    int length = sizeof(arr) / sizeof(arr[0]);  // Calculate the length of the array
    int sum = 0;
    float average;

    // Calculate the sum
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    // Calculate the average
    average = (float)sum / length;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

