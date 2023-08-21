#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 *
 * Description: This function takes a string as a parameter and prints it
 */
void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}
