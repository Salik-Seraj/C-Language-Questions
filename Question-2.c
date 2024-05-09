#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;
    
    // Input the dividend and divisor
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    
    // Compute quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    
    // Output the quotient and remainder
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    return 0;
}
