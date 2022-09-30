#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string pointer to be scanned
 * @accept: string pointer, containing byte to be matched
 *
 * Return: returns pointer to byte in s hat matches one of the bytes in accept
 * else returns '\0'
 */
char *_strpbrk(char *s, char *accept)
{
	char m, o;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		for (o = 0; *(accept + o) != '\0'; o++)
		{
			if (*(s + m) == *(accept + o))
				return (s + m);
		}
	}
	return ('\0');
}
