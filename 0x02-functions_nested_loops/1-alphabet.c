#include "main.h"
/**
 * main - entry point
 *
 * Description: Write a function that prints the alphabet, in lowercase
 *
 * Return: (0)
 */
void print_alphabet(void)
{
	char letter;
	for (letter= 'a' ;letter <= 'z' ; letter ++)
{
	_putchar(letter);
}
	_putchar('\n');
	return (0);
}
