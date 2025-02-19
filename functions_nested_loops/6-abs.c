#include "main.h"

/**
 * _abs - gets the absolute value of an integer
 * @n: the number to check
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return (2147483647); /* Avoids overflow */
		return (-n); /* Make it positive */
	}
	return (n); /* It's already positive */
}
