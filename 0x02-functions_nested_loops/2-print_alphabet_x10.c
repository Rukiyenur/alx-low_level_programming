#include "main.h"
/**
 * print_alphabet_x10 the alphabet
 *
 * Description:prints 10 times the alphabet, in lowercase
 *
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0 ; count < 10 ; count++)
{
	for (letter = 'a' ; letter <= 'z' ; letter++)
{
	_putchar(letter);
}
	_putchar('\n');
}
}
