#include "main.h"

/**
 * _isupper - function to check if character is uppercase
 *
 * @c - checks input of a function
 *
 * Return: returns 1 if 'c' is uppercase, otherwise, return 0 always (success)
 *
 * */

int _isupper (int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
