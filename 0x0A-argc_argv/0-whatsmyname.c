#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the name of the function
 * @argc: number of argument
 * @argv: names of argument
 * Return: 0 always for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
