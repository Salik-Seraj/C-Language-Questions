// C Program to Calculate the Sum of Natural Numbers

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the limit from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers up to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Print the sum
    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
