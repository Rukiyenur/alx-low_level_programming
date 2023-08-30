#include "main.h"

/**
 * sqrt_recursion - Calculates the square root of a number using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 * Description: a function that returns the natural square root of a number
 * Return: The square root of the number, or -1 if it doesn't have a natural square root.
 */
int sqrt_guess(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
{
	return -1;
}

	return sqrt_guess(n, 1);
}

int sqrt_guess(int n, int guess)
{
	if (guess * guess == n)
{
	return guess;
}

	if (guess * guess > n)
{
	return -1;
}

	return sqrt_guess(n, guess + 1);
}
