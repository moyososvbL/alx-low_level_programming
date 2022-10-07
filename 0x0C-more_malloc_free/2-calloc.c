#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function allocates memory for an array of nmemb
 * @nmemb: unsigned int.
 * @size: size of allocate memory
 * Return: ch
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int i = 0;
	char *ch;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ch = malloc(nmemb * size);

	if (ch == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		ch[i] = 0;
		i++;
	}

	return (ch);
}
