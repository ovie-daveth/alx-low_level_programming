#include <stdio.h>
#include "main.h"

/**
 * main - couts the number of argumet
 * @argc: number of argument
 * @argv: arguments passed
 * Return: 0 always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
