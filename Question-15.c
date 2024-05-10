// Write a C language program using recursive function to enter an integer and find the number of digits and their sum.

#include <stdio.h>

// Recursive function to find the number of digits and their sum
void findDigitsAndSum(int num, int *count, int *sum) {
    // Base case: if num is 0, return
    if (num == 0)
        return;
    
    // Recursively call the function with the quotient and update count and sum
    findDigitsAndSum(num / 10, count, sum);
    
    // Update count and sum
    *count += 1;
    *sum += num % 10;
}

int main() {
    int num, count = 0, sum = 0;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the recursive function to find the number of digits and their sum
    findDigitsAndSum(num, &count, &sum);

    // Display the results
    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
