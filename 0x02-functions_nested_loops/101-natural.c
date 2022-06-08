#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints the sum of all multiples of 5 and 3 below 1024
 *
 *Return: zero(success)
 *
 */
int main(void)
{
	int a;
	int t_sum;

	t_sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			t_sum = t_sum + a;
		}
	}
	printf("%d\n", t_sum);
	return (0);
}
