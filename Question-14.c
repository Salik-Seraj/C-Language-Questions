// Write a program to display all odd numbers from 1 to 50 using for loop only

#include <stdio.h>

int main() {
    printf("Odd numbers from 1 to 50:\n");
    
    // Using a for loop to iterate through numbers from 1 to 50
    // Checking if each number is odd, and printing it if it is
    for (int i = 1; i <= 50; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
