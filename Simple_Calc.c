#include <stdio.h>

int add(sint16 a,sint16 b);
sint16 sub(sint16 a,sint16 b);
float mult(float a,float b);
sint16 div(sint16 a, sint16 b);

sint16 main(void)
{
	sint16 a = 100;
	sint16 b = 100;
	sint16 sum = add(a,b);
	sint16 diff = sub(a,b);
	float prod = mult(100.100,100.55);
	sint16 quot = div(a,b);
	printf("Sum = %d\nDifference = %d\nProduct = %f\nQuotient = %d\n",sum,diff,prod,quot);
	return 0;
}

sint16 add(sint16 a, sint16 b)
{
	return a+b;
}

sint16 sub(sint16 a,sint16 b)
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

sint16 div(sint16 a,sint16 b)
{
	if (b!=0)
	{
		return a/b;
	}
	else{
		return 0;
	}
}


		
