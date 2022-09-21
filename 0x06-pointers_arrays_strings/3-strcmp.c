#include "main.h"
#include <string.h>

/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */

int _strcmp(char *s1, char *s2)
{
	int comp;

	comp = strcmp(s1, s2);
	return (comp);
}
