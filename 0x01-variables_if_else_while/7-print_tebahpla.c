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
	int letter = 'z';

	while (letter <= 'a')
{
	putchar(letter);
}
	letter--;
	putchar('\n');
	return (0);
}
