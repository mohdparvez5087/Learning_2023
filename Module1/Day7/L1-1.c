#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char *inputString, struct Student *students, int numStudents) {
    char temp[20];
    int i = 0;
    int j = 0;
    int k = 0;

    while (inputString[i] != '\0') {
        if (inputString[i] == ' ') {
            temp[j] = '\0';
            j = 0;

            if (k == 0) {
                students[k].rollno = atoi(temp);
            } else if (k == 1) {
                strcpy(students[k].name, temp);
            } else if (k == 2) {
                students[k].marks = atof(temp);
            }

            k++;
        } else {
            temp[j] = inputString[i];
            j++;
        }

        i++;
    }

    // Assign the last field
    temp[j] = '\0';
    students[k].marks = atof(temp);
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Allocate memory for the array of structures
    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    // Read the input string
    char inputString[100];
    printf("Enter the string: ");
    scanf(" %[^\n]s", inputString);

    // Parse the string and initialize the array of structures
    parseString(inputString, students, numStudents);

    // Print the array of structures
    printf("\nStudent Details:\n");
    int i;
    for (i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free the allocated memory
    free(students);

    return 0;
}

