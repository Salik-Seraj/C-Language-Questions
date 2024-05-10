// C Program to Count Number of Digits in an Integer

#include <stdio.h>

int countDigits(int num) {
    int count = 0;

    // Counting digits using a loop
    while (num != 0) {
        num /= 10;
        ++count;
    }

    return count;
}

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count the number of digits
    int digits = countDigits(num);

    // Display the result
    printf("Number of digits in %d is: %d\n", num, digits);

    return 0;
}
