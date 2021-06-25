#include <stdio.h>

int main()
{
    char ope;
    float num1, num2, result=0.0f;

    printf("<-----------Calculator----------->\n\n");
    printf("Enter [1st num] [+ - * /] [2nd num]\n");

    scanf("%f %c %f", &num1, &ope, &num2);

    switch(ope)
    {
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
            result = num1 / num2;
            break;

        default:
            printf("Invalid Operator");
    }
    printf("Result: %.2f %c %.2f = %.2f", num1, ope, num2, result);
    return 0;
}
