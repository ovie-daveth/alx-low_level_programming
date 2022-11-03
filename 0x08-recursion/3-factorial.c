#include "main.h"

/**
 * factorial - create the favtorial of a number
 * @n:number to factor
 * Return: 0 fir n == 1 and -1 for failed progran
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
