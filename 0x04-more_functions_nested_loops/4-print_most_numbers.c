#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 * Return: 0
 */

void print_most_numbers(void);
{
	char c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
		{
			_putchar('0' + n);
		}

		c++;
	}
	_putchar('\n');
}
