#include <stdio.h>
#include <stdlib.h>

// Structure to store student data
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;

    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' student structures
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Read data for each student
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &(students[i].age));

        printf("Enter marks: ");
        scanf("%f", &(students[i].marks));
    }

    // Display data for each student
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}

