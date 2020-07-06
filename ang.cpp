#include <stdio.h>
#include <math.h>



int isEven (int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
    
}



 

int main()
{
    int a=0;
    scanf("%d", &a);
    int r = isEven(a);
    printf("%s\n", r ? "четное" : "нечетное");
    return 0;
}

