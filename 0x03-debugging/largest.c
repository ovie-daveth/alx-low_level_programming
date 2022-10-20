#include <stdio.h>

int main(int largest)
{
	int a, b, c;

	a = 0;
	b = 8;
	c = 6;

	if (a > b && b > a)
	{
		largest = a;
		printf("%d\n", largest);
	}
	else if (b > a && a > c)
	{
		largest = b;
		printf("%d\n", largest);
	}
	else 
	{
		largest = c;
		printf("%d\n", largest);
	}
	return (largest);
}	
