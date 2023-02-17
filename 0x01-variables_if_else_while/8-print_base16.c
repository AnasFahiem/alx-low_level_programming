#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0';c <= '9';c++)
	{
		putchar(c);
	}
	for (c = 'a';c <= 'f';c++)
	{
		putchar(c);
	}
	putchar('\n');
	return(0);
}
