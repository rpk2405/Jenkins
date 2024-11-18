#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a, int b);

int main(void)
{
	int a = 100;
	int b = 100;
	int sum = add(a,b);
	int diff = sub(a,b);
	int prod = mult(a,b);
	int quot = div(a,b);
	printf("Sum=%d\nDifference=%d\nProduct=%d\nQuotient=%d\n",sum,diff,prod,quot);
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

int mult(int a,int b)
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


		
