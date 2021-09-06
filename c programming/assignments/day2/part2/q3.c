#include <stdio.h>
void main() {
    char operator;
    float first_num, second_num;
    printf("Enter an operator (+, -, *,): \n");
    scanf("%c", &operator);
    printf("Enter two operands: \n");
    scanf("%f %f", &first_num, &second_num);

    switch (operator) {
    case '+':
        printf("%.2f + %.2f = %.2f\n", first_num, second_num, first_num + second_num);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", first_num, second_num, first_num - second_num);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", first_num, second_num, first_num * second_num);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n", first_num, second_num, first_num / second_num);
        break;
    default:
        printf("Error! operator is not correct");
    }
}
