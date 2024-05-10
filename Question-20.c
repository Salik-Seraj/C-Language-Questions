// C Program to create a structure “Employee” with Eno, Ename, Esalary and DOJ asmember elements. Read atleast 5 records and display names of employees whose salary is more than 50000

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int Eno;
    char Ename[50];
    float Esalary;
    char DOJ[11]; // Assuming format DD-MM-YYYY (10 characters + null terminator)
};

int main() {
    int numEmployees, i;
    struct Employee emps[MAX_EMPLOYEES];

    printf("Enter the number of employees (up to %d): ", MAX_EMPLOYEES);
    scanf("%d", &numEmployees);

    if (numEmployees > MAX_EMPLOYEES) {
        printf("Error: Maximum employee capacity is %d\n", MAX_EMPLOYEES);
        return 1;
    }

    // Read employee details
    for (i = 0; i < numEmployees; ++i) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emps[i].Eno);

        printf("Employee Name: ");
        scanf(" %[^\n]", emps[i].Ename); // Read name with spaces (use scanf with space in format string)

        printf("Employee Salary: ");
        scanf("%f", &emps[i].Esalary);

        printf("Date of Joining (DD-MM-YYYY): ");
        scanf(" %[^\n]", emps[i].DOJ); // Read DOJ with hyphens (use scanf with space in format string)
    

    printf("\nEmployees with salary greater than 50000:\n");
    for (i = 0; i < numEmployees; ++i) {
        if (emps[i].Esalary > 50000) {
            printf("%s (ID: %d)\n", emps[i].Ename, emps[i].Eno);
        }
    }

    return 0;
}