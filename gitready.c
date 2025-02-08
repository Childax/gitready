#include <stdio.h>

int main()
{
    float x, y, sum;
    int operator;

    printf("Enter first number: \n");
    scanf("%f", &x);
    printf("Enter second number: \n");
    scanf("%f", &y);
    printf("Choose an operator: \n");
    printf("1: +\n");
    printf("2: -\n");
    printf("3: *\n");
    printf("4: /\n");
    scanf("%d", &operator);

    switch (operator)
    {
        case 1:
            sum = x + y;
            break;
        case 2:
            sum = x - y;
            break;
        case 3:
            sum = x * y;
            break;
        case 4:
            sum = x / y;
            break;
    }

    printf("The sum is: %.2f", sum);
}