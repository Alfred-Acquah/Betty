#include "main.h"

/**
 *
 * _isupper - checkss for uppercase character
 * @c: characters
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
