#include "main.h"

/**
 * print_most_numbers - prints the numbers 1 to 9 except 2 and 4
 * Return: 0 for success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && 1 != 4)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
