#include <stdio.h>

void printIncreasing(int n);
void printSpaces(int n);
void printDecreasing(int n);

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Print the pattern
    printIncreasing(n);
    printSpaces(n);
    printDecreasing(n);
    
    return 0;
}

void printIncreasing(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i, j;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
        for (j = 1; j <= 2 * (n - i) - 1; j++) {
            printf(" ");
        }
        if (i > 1) {
            printf("%d", i);
        }
    }
}

void printDecreasing(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    printf("\n");
}


