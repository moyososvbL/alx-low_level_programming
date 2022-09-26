#include "main.h"

/**
 * *_memset - Fills the first n bytes of the memory area
 * @s: address to memory block
 * @b: char to be used
 * @n: The number of bytes to be filled.
 * Return: A pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (s)
	{
		s[n - 1] = b;
		n == 1;
	}
	return (s);
}
