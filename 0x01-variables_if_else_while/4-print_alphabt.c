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
		if (i == 'e' || i == 'q')
			continue;
		else
			printf("%c", i);
			printf("\n");
	return (0);
}
