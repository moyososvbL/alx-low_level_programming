#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string pointer
 * @accept: string pointer
 *
 * Return: returns number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, j, n;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		n = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + m) == *(accept + j))
			{
				n = 0;
				break;
			}
		}
		if (n == 1)
			break;
	}
	return (m);
}
