#include <stdio.h>
#include <string.h>

// Structure for storing personal information of a person
struct Person {
    char name[50];
    int age;
    char gender[10];
};

// Structure for storing student information
struct Student {
    struct Person personalInfo;
    char studentID[20];
    char department[50];
    float grades[5]; // Assuming 5 subjects
};

// Structure for storing teacher information
struct Teacher {
    struct Person personalInfo;
    char subject[50];
    char department[50];
};

// Structure for storing staff information
struct Staff {
    struct Person personalInfo;
    char position[50];
};

// Function to calculate CGPA for a student
float calculateCGPA(struct Student *student) {
    float totalMarks = 0;
    for (int i = 0; i < 5; i++) { // Assuming 5 subjects
        totalMarks += student->grades[i];
    }
    return totalMarks / 5; // Assuming 5 subjects
}

// Function to mark attendance for a student
void markAttendance(struct Student *student, char date[20]) {
    printf("Attendance marked for %s on %s\n", student->personalInfo.name, date);
}

int main() {
    // Example usage
    struct Student students[100]; // Assuming maximum 100 students
    struct Teacher teachers[20]; // Assuming maximum 20 teachers
    struct Staff staff[50]; // Assuming maximum 50 staff members

    // Adding student information
    strcpy(students[0].personalInfo.name, "John Doe");
    students[0].personalInfo.age = 20;
    strcpy(students[0].personalInfo.gender, "Male");
    strcpy(students[0].studentID, "S001");
    strcpy(students[0].department, "Computer Science");
    students[0].grades[0] = 85; // Marks for subject 1
    students[0].grades[1] = 90; // Marks for subject 2

    // Adding teacher information
    strcpy(teachers[0].personalInfo.name, "Dr. Smith");
    teachers[0].personalInfo.age = 35;
    strcpy(teachers[0].personalInfo.gender, "Male");
    strcpy(teachers[0].subject, "Computer Networks");
    strcpy(teachers[0].department, "Computer Science");

    // Adding staff information
    strcpy(staff[0].personalInfo.name, "Emily Watson");
    staff[0].personalInfo.age = 30;
    strcpy(staff[0].personalInfo.gender, "Female");
    strcpy(staff[0].position, "Librarian");

    // Example usage of functionalities
    float cgpa = calculateCGPA(&students[0]);
    printf("%s's CGPA: %.2f\n", students[0].personalInfo.name, cgpa);

    markAttendance(&students[0], "2024-04-29");

    return 0;
}


