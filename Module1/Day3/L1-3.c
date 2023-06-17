#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    
    while (divisor <= 1000) {
        int reducedNum = (num / (divisor * 10)) * divisor + (num % divisor);
        if (reducedNum > largest) {
            largest = reducedNum;
        }
        divisor *= 10;
    }
    
    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
    int largestNumber = findLargestNumber(number);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);
    
    return 0;
}

