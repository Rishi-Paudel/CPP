// 1_4.c
// Q. Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    char name[30];
    char rollNo[9];
    char address[50];
    double phoneNumber;
};

void main()
{
    FILE *fp;
    char filename[30] = "records.txt";
    int no_of_students = 2;
    struct Student s[no_of_students], temp;
    // printf("Enter file name: ");
    // scanf("%s", &filename);

    if ((fp = fopen(filename, "wb")) == NULL)
        exit(0);
    // Getting and Storing the Data
    for (int i = 0; i < no_of_students; i++)
    {
        printf("Name: ");
        scanf("%s", &s[i].name);
        printf("Roll Number: ");
        scanf("%s", &s[i].rollNo);
        printf("Address: ");
        scanf("%s", &s[i].address);
        printf("Phone Number: ");
        scanf("%lf", &s[i].phoneNumber);
        printf("\n");
        fwrite(&s[i], sizeof(s[i]), 1, fp);
    }    
    fclose(fp);

    if ((fp = fopen(filename, "rb")) == NULL)
        exit(0);
    // Retreiving the data
    for (int i = 0; i < no_of_students; i++)
    {
        fread(&s[i], sizeof(s[i]), 1, fp);
    }
    for (int i = 0; i < no_of_students; i++)
    {
        for (int j = 0; j < no_of_students; j++)
        {
            if (strcmp(s[i].name, s[j].name) < 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    // Displaying the result
    printf("Name\t\tRoll No\t\tAddress\t\tPhone Number\n");
    for (int i = 0; i < no_of_students; i++)
    {
        printf("%s\t\t", s[i].name);
        printf("%s\t\t", s[i].rollNo);
        printf("%s\t\t", s[i].address);
        printf("%.0lf", s[i].phoneNumber);
        printf("\n");
    }
    fclose(fp);
}