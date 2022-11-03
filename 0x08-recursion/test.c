#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
