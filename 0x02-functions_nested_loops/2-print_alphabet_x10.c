#include "main.h"

/**
 * print_alphabet_v10 -prints alphabet 10 times
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char c;

	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= '2')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

		i++;
	}
}
