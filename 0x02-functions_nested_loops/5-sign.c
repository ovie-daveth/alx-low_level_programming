#include "main.h"

/**
 * print_sign - shows the sign of numbers
 * @n: the signs of numbers
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n == 0)
	{
		_putchar(48);
		return (0);
	}else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
