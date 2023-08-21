#include <unsitd.h>

/**
 *_putchar - write a charachter c
 *@c : the printed charachter
 *
 * Return: on sucsses 1.
 * in error, -1 is returned
 */
int _putchar(char c)
{
	return(write (1 , &c, 1));
}
