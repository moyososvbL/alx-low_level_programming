#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all parameters
 * @n: The number of the parameters
 *
 * Return: return the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int o;
	int add = 0;

	va_list para;

	va_start(para, n);

	for (int o = 0; o < n; o++)
		add += va_arg(para, int);

	va_end(para);

	return (add);

}
