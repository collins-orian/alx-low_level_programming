#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: tested string
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
