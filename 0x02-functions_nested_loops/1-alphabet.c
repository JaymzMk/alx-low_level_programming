#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * Description: print alphabet prints alphabet in lowercase
 * Returns nothing
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
