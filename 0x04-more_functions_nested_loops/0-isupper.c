#include <stdio.h>
#include "main.h"

/**
 * main - tests if letters are upper case letters
 *
 * Return: 0
 *
 * */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
