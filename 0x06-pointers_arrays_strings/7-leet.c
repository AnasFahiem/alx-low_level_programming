#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *)
{
	int i, ii;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (s[i] == s1[ii] || s[i] == s2[ii])
			{
				s[i] = s3[ii];
				break;
			}
		}
	}
	return (s);
}
