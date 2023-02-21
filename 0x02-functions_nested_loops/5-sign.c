#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n : integer for check
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
	int t;
	
	if (n > 0)
	{
		t = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		t = 0;
	        _putchar('0');
	}
	else
	{
		t = -1;
		_putchar('-');
	}
	return (t);
}
