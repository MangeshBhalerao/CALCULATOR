include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the divisor is not zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit with an error code
    }

    // Output the result
    printf("Result: %.2f\n", result);

    return 0;  // Exit successfully
} 
