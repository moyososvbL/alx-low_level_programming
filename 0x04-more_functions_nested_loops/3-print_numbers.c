#include "main.h"

/**
* print_numbers - checks for a digit (0 through 9)
* Return: nothing
*/

void print_numbers(void)
{
	char i;

	i = 0;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

		_putchar('\n');
}
