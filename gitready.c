#include <stdio.h>
// Something
int main()
{
    int x, y, sum;
    int operator;
    int z;

    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);
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

    printf("The sum is: %d", sum);


    return 0;
}