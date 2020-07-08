#include <stdio.h>

int main(void)
{
    float a = 0;
    float b = 0;
    float result = 0;
    char operation = 0;
    scanf("%f %f %c", &a, &b, &operation);
    if (operation == '-')
        result = a - b;
    else if (operation == '+')
        result = a + b;
    else if (operation == '*')
           result = a * b;
    else if (operation == '/')
           result = a / b;
    printf("%g\n", result);
    return 0;
}
