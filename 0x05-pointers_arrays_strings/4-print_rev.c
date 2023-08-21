#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Description: prints it in reverse
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
{
	length++;
}

	for (length--; length >= 0; length--)

{
	_putchar(s[length]);
}
	_putchar('\n');
}
