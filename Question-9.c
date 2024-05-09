//  Program to Check Whether a Number is Positive or Negative

#include <stdio.h>

int main() {
    int number;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is greater than 0
    if (number > 0) {
        printf("%d is positive.\n", number);
    }
    // Check if the number is less than 0
    else if (number < 0) {
        printf("%d is negative.\n", number);
    }
    // If neither greater than nor less than 0, then it's 0
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
