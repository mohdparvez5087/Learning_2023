#include <stdio.h>
#include <string.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student Student;
void initStudent(Student *, int, char *, float);
void displayStudent(Student *);
int main()
{
    int size = 2;
    int rolln;
    char n[20];
    float mark;
    Student arr[size]; // == Employee e1; Employee e2;
    printf("Scanning\n");
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &rolln);
        scanf("%s", n);
        scanf("%f", &mark);
        initStudent(&arr[i], rolln, n, mark);
    }
   printf("Displaying\n");
    for (i = 0; i < size; i++)
    {
        
       printf("%d\n", arr[i].rollno);
       printf("%s\n", arr[i].name);
    	printf("%f\n", arr[i].marks);
    }
    return 0;
}
void initStudent(Student *ptr, int rolln, char *nptr, float mark)
{
    // initialize structure's members
    ptr->rollno = rolln;
    ptr->marks = mark;
    strcpy(ptr->name, nptr);
}
