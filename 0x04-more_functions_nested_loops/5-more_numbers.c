#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return: 0
 */

void more_numbers(void)
{
	char i;

	for (i = 0; i <= 10; i++)
	{
		char c = 0;

		while (c <= 14)
		{
			_putchar('0' + c);
			c++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
