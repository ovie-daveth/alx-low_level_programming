#include <stdio.h>

/**
 * main - prints numbers 1 to 10
 * except for the multiples of 3, 5 and both
 * whivh gives fizz, buzz and fizzbuzz respectively
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
