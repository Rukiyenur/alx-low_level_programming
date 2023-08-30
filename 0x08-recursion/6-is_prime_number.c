#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1) // Base case: 0 and 1 are not prime
    {
        return 0;
    }

    return check_prime(n, 2); // Call the helper function with initial values
}

/**
 * check_prime - Helper function to check for prime using recursion.
 * @n: The number to be checked for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int check_prime(int n, int divisor)
{
    if (divisor == n) // Base case: n is only divisible by itself
    {
        return 1;
    }

    if (n % divisor == 0) // If n is divisible by any other number
    {
        return 0; // n is not prime
    }

    return check_prime(n, divisor + 1); // Check with the next divisor
}

