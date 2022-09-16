#include "main.h"
#include <stdio.h>

/**
* _isupper - function to check if character is uppercase
*
* @c: check input of function
* Return : return 1 if 'c' is uppercase
* otherwise always 0
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
