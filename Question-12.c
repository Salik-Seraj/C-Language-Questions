// Write a program to display the multiplication table.

#include <stdio.h>

int main() {
    int number;

    // Input the number from user
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);

    // Display the multiplication table
    printf("Multiplication table of %d:\n", number);
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
