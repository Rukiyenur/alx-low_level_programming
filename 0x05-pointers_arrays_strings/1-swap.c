#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: A pointer to the first integer
 * @b: A pointer to the second integer
 *
 * Description: This function takes two integer pointers as parameters
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
