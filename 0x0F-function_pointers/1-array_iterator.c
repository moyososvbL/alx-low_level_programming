#include "function_pointers.h"

/**
 * array_iterator - the array iterator needed in the program
 * @size: the size of the array
 * @array: array needed
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)

		return;

	while (size => 0)
	{
		action(*array);
		array++;

	}

}
