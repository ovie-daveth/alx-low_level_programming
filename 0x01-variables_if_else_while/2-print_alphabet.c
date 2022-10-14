#include <stdio.h>

/* This program prints the alphabet in lowercase, followed by a new line */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z';)
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
