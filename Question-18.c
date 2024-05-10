// C Program to Display Prime Numbers Between Intervals Using Function

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 1 or less are not prime
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Divisible by other numbers, not prime
        }
    }
    return 1; // Prime number
}

void displayPrimes(int lower, int upper) {
    printf("Prime numbers between %d and %d are: ", lower, upper);
    // Swap if lower limit is greater than upper limit
    if (lower > upper) {
        int temp = lower;
        lower = upper;
        upper = temp;
    }

    for (int i = lower + 1; i <= upper; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    displayPrimes(lower, upper);

    return 0;
}