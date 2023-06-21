#include <stdio.h>

// Structure to represent a person
struct Person {
    char name[50];
    int age;
};

// Function to swap the fields of two structures using pointers
void swapFields(struct Person *person1, struct Person *person2) {
    // Swap the name fields
    char tempName[50];
    strcpy(tempName, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, tempName);

    // Swap the age fields
    int tempAge = person1->age;
    person1->age = person2->age;
    person2->age = tempAge;
}

int main() {
    // Declare and initialize two person structures
    struct Person person1 = {"Alice", 25};
    struct Person person2 = {"Bob", 30};

    // Print the initial values
    printf("Before swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    // Swap the fields using the swapFields function
    swapFields(&person1, &person2);

    // Print the swapped values
    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    return 0;
}

