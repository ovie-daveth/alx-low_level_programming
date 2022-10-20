#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: character that prints new line
 * Return; 0 for success
 */
void print_line(int n)
{
	char ch;
	int i;

	ch = '_';

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(ch);
	}
}
