#include "main.h"

/**
 * print_numbers - prints the nubers 0 to 9
 * Return: 0 as success
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++
	}
	_putchar('\n');
}
