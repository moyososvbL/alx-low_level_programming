#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on
 *
 * Return:0
 */
int main(void)
{

	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("%lu\n", sizeof(myInt));
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));
	return (0);
}
