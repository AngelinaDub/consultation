
#include <stdio.h>
#include <math.h>


#define INF -1



int solveLinear(float b, float c, float* x)
{
	if (b == 0 and c == 0) 
		return INF;
		
	else if (b == 0 and c != 0)
		return 0;
		
	else
	{
        *x = (-c) / b;
		return 1;
	}
}


void printRoots(int count, float x1, float x2)
{
	if (count == 0)
		printf("Корней нет\n");
		
	else if (count == INF)
		printf("Корней бесконечно много\n");
		
	else if (count == 1)
		printf("Единнственный корень: %g\n", x1);
		
	else if (count == 2)
		printf("Два корня: %g и %g\n", x1, x2);
}

float sqr(float b)
{
    float sqr = b*b;
    return sqr;
}

float D(float a, float b, float c) // Из a, b, c вычисляет дискриминант
{
    float d = sqr(b) - 4*a*c;
    return d;
}


int solveSquare(float a, float b, float c, float* x1, float* x2) // Решает квадр уравнение через дискриминант
{
    float d = D(a, b, c);
    if (d < 0)
        return 0;
    *x1 = (-b + sqrt(d)) / 2*a;
    *x2 = (-b - sqrt (d)) / 2*a;
    if (d == 0)
        return 1;
    if (d > 0)
        return 2;
    return 0;
}





// ax^2 + bx + c = 0; - это квадратное уравнение!
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;

    scanf("%f %f %f", &a, &b, &c );
	
	int count = 0;
	
	float x1 = 0;
	float x2 = 0;
	
	if (!a)		// equal to "a == 0"
	{
		count = solveLinear(b, c, &x1);
		printRoots(count, x1, x2);
	}
	
	else
	{
		count = solveSquare(a, b, c, &x1, &x2);
		printRoots(count, x1, x2);
	}
	
	return 0;
}
