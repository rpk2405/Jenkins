#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
float mult(float a,float b);
int div(int a, int b);

int main(void)
{
	int a = 100;
	int b = 100;
	int sum = add(a,b);
	int diff = sub(a,b);
	float prod = mult(100.100,100.1);
	int quot = div(a,b);
	printf("Sum = %d\nDifference = %d\nProduct = %f\nQuotient = %d\n",sum,diff,prod,quot);
	return 0;
}

int add(int a, int b)
{
	return a+b;
}

int sub(int a,int b)
{
	if (a>b)
	{
		return a-b;
	}
	else
	{
		return b-a;
	}
}

float mult(float a,float b)
{
	return a*b;
}

int div(int a,int b)
{
	if (b!=0)
	{
		return a/b;
	}
	else
		return 0;
}


		
