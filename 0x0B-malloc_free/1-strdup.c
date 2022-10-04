#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a new string
 * @str: string to be copied
 *
 * Return: pointer to the copied string (0), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}

