#include <stdio.h>

int find_biggest(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = find_biggest(num1, num2);
    printf("The biggest number is: %d\n", result);

    return 0;
}

