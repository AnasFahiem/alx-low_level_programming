#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: void.
 */

int main(void)
{
	int c = 1;

	while (c <= 100)
	{
		if (c % 2 == 0)
		{
			printf("Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", c);
		}

		if (c != 100)
		{
			putchar(' ');
		}

		c++;
	}
	putchar('\n');
	return (0);

}
