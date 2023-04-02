#include <stdio.h>

int main() {
    float num1, num2, result, ty;
    char op;

    printf("Enter firsftt number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
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
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("Your answer of %.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}
