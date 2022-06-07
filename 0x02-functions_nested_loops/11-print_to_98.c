#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @a: starting integer
 * Description: prints all natural number from a - 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (a < 98)
	{
		while (a < 98)
		{
			printf("%d, ", a);
			a++;
		}
	}
	else if (a > 98)
	{
		while (a > 98)
		{
			printf("%d, ", a);
			a--;
		}
	}
	printf("98\n");
}
