#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar('0' + c);
		c++;

	}
	_putchar('\n');

}
