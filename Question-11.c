// C Program to Find Factorial of a Number

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input the number from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // Print the factorial
    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
