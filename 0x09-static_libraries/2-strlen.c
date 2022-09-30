#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The string to get the lenght
 *
 * Return: The lenght of @s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
