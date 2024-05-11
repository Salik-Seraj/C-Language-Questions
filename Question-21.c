// C Program to create a structure “Student” with Rollno, name, marks and DOB as member elements. Read atleast 5 records and display names of students whose age is more than 20 years

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Structure definition for Student
struct Student
{
    int Rollno;
    char name[50];
    float marks;
    struct Date
    {
        int day;
        int month;
        int year;
    } DOB;
};

// Function to calculate age from date of birth
int calculateAge(struct Date dob)
{
    time_t now;
    struct tm *local;
    time(&now);
    local = localtime(&now);
    int currentYear = local->tm_year + 1900;
    int age = currentYear - dob.year;
    if (local->tm_mon + 1 < dob.month || (local->tm_mon + 1 == dob.month && local->tm_mday < dob.day))
    {
        age--;
    }
    return age;
}

int main()
{
    struct Student students[5]; // Array to store 5 student records

    // Reading student records
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Rollno: ");
        scanf("%d", &students[i].Rollno);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
        printf("Enter Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &students[i].DOB.day, &students[i].DOB.month, &students[i].DOB.year);
    }

    // Displaying names of students with age more than 20 years
    printf("\nNames of students with age more than 20 years:\n");
    for (int i = 0; i < 5; i++)
    {
        int age = calculateAge(students[i].DOB);
        if (age > 20)
        {
            printf("%s\n", students[i].name);
        }
    }

    return 0;
}
