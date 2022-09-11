#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char u;

	for (i = 'a'; i <= 'z'; i++)
		printf("%c", i);
	for (u = 'A'; u <= 'Z'; u++)
		printf("%c", u);
	printf("\n");
	return (0);
}

