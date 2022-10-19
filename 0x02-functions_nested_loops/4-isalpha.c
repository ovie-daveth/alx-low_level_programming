#include "main.h"

/**
 * _isalpha - checks the character of an alphabet
 * @c: characters
 * Return: 1 if c is letter or 0 for otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
