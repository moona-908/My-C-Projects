#include <stdio.h>

int main() {
    // Variable declaration
    int number1, number2, result;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Calculation
    result = number1 + number2;

    // Displaying the output
    printf("The sum of %d and %d is: %d\n", number1, number2, result);

    return 0;
}