#include <stdio.h>
#include <string.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student Student;


int main()
{
    int size = 2;
    int rolln;
    char n[20];
    float mark;
    Student arr[size]; // == Employee e1; Employee e2;
    printf("Scanning\n");
    int i;
    Student *ptr;
    for (i = 0; i < size; i++)
    {
        scanf("%d %s %f", &rolln , n , &mark);
       // scanf("%s", n);
       // scanf("%f", &mark);
        arr[i].rollno=rolln;
        //*ptr=&arr[i];
        strcpy(arr[i].name,n);
        arr[i].marks=mark;
        
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

