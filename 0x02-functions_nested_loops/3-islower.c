#include "main.h"


/**
 * _islower - return 0 letter no lowercase, return 1 letter lowercase;
 *
 * @c: The int to print
 * Return: 0 not lowercase, 1 lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
