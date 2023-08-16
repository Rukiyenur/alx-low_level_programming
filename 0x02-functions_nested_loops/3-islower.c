#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 *
 * Return: Always 0.
 */
        int _islower(int c)
{
{
	return (c >= 'a' && c <= 'z');
}	
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
