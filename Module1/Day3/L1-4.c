#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;  // Initialize smallestDigit to the largest possible digit
    int largestDigit = 0;   // Initialize largestDigit to the smallest possible digit
    
    // Iterate through each number
    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        
        // Find the smallest and largest digit in the current number
        while (num != 0) {
            int digit = num % 10;
            smallestDigit = (digit < smallestDigit) ? digit : smallestDigit;
            largestDigit = (digit > largestDigit) ? digit : largestDigit;
            num /= 10;
        }
    }
    
    // Check if valid numbers were entered
    if (smallestDigit == 9 && largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}

