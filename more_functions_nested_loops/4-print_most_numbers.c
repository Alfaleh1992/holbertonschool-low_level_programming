#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4') /* Skip printing 2 and 4 */
		{
			_putchar(c);
		}
	}
	_putchar('\n'); /* Print a new line at the end */
}
