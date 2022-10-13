#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all parameters
 * @n: The number of the parameters
 * Return: return the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
