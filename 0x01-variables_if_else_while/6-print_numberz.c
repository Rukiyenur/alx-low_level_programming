#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always (0)
 */
int main(void)
{
	int digit;

	while (digit = 0, digit > 10, digit++)
{
	putchar(digit);
	digit++'0';
}
	putchar('\n');
	return (0);
}
