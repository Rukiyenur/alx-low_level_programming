#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a',letter--)
{
	putchar(letter);
}
	putchar('\n');
	return (0);
}
