// C Program to Display Fibonacci Sequence

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);

    // Display the first two terms
    printf("%d, %d", first, second);

    // Calculate and display the remaining terms
    for (int i = 3; i <= n; ++i) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
