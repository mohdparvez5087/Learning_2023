#include <stdio.h>

void printExponent(double x) {
    unsigned long long* p = (unsigned long long*)&x;
    unsigned long long exponent = (*p & 0x7FF0000000000000) >> 52;
    unsigned long long hexExponent = exponent & 0x7FF;
    
    printf("Hexadecimal Exponent: 0x%llX\n", hexExponent);
    
    // Binary representation
    printf("Binary Exponent: 0b");
    for (int i = 11; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}


