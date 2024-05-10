// C Program to Calculate Average Using Arrays

#include <stdio.h>

int main() {
    int n;
    float numbers[100]; // Array to store numbers (can be modified to accept user input for size)
    float sum = 0.0, average;

    // Get the number of elements (uncomment if you want user input for size)
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);

    // Predefined example data (replace with your input method if needed)
    n = 5;
    numbers[0] = 10.5;
    numbers[1] = 15.2;
    numbers[2] = 8.7;
    numbers[3] = 12.9;
    numbers[4] = 19.1;

    // Calculate the sum
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }

    // Calculate the average
    average = sum / n;

    // Print the average
    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}
