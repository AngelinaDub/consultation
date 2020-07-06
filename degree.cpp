#include <cstdio>

int degree(int base, int power)
{
    int result = 1;
    while (power != 0)
    {
        result = result * base;
        power = power - 1;
    }
    
    return result;
    
}

int main()
{
    int base = 0;
    int power = 0;
    scanf("%d %d", &base, &power);
    int result = degree(base, power);
    printf("%d\n", result);
}
