// 1_3.c    
// Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.

#include <stdio.h>

struct students
{
    char name[35];
    float obt_marks_in_c;
} stu[50];

void main()
{
    int no_of_students;
    printf("Enter the number of students: ");
    scanf("%d", &no_of_students);
    printf("\n");

    for (int i = 0; i < no_of_students; i++)
    {
        printf("Enter the name of %dth student: ", i + 1);
        scanf("%s", &stu[i].name);
        printf("Enter the marks obtained in C: ");
        scanf("%f", &stu[i].obt_marks_in_c);
        printf("\n");
    }

    printf("\n");
    printf("Name of the students and Obtained marks in C programming in 1st semester:\n");

    printf("Name\t\tMarks obtained in C\n");
    for (int i = 0; i < no_of_students; i++)
    {
        printf("%s\t\t%.2f\n", stu[i].name, stu[i].obt_marks_in_c);
    }
}