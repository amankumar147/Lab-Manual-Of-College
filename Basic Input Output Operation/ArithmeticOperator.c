#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Input two numbers and the operator
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c to consume newline from previous input

    // Perform operation using ternary operator
    result = (operator == '+') ? (num1 + num2) :
             (operator == '-') ? (num1 - num2) :
             (operator == '*') ? (num1 * num2) :
             (operator == '/' && num2 != 0) ? (num1 / num2) :
             0; // Default to 0 for invalid operations

    // Check for invalid operations
    if ((operator == '/' && num2 == 0) || (operator != '+' && operator != '-' && operator != '*' && operator != '/')) {
        printf("Error: Invalid operation or division by zero.\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
