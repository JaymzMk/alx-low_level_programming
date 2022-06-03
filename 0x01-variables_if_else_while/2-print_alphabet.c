#include <stdio.h>
#include <ctype.h>
/**
 * main - my entry point
 * Description: print alphabet starting with lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
