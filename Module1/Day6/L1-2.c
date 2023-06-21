#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number from the user
void readComplex(struct Complex *complex) {
    printf("Enter the real part: ");
    scanf("%f", &(complex->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(complex->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real + complex2.real;
    result.imaginary = complex1.imaginary + complex2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real * complex2.real - complex1.imaginary * complex2.imaginary;
    result.imaginary = complex1.real * complex2.imaginary + complex1.imaginary * complex2.real;
    return result;
}

int main() {
    // Declare two complex numbers
    struct Complex complex1, complex2;

    // Read the first complex number
    printf("Enter the first complex number:\n");
    readComplex(&complex1);

    // Read the second complex number
    printf("Enter the second complex number:\n");
    readComplex(&complex2);

    // Write the first complex number
    printf("First complex number:\n");
    writeComplex(complex1);

    // Write the second complex number
    printf("Second complex number:\n");
    writeComplex(complex2);

    // Add the two complex numbers
    struct Complex sum = addComplex(complex1, complex2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    // Multiply the two complex numbers
    struct Complex product = multiplyComplex(complex1, complex2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}

