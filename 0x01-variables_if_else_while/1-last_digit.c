#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: print the last digit of the number stored in the variable n
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;
	int y;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
    	printf("y of %d is %d ", n, y);

	if (y > 5)
{
	printf("and is greater than 5\n");
}
	else if (y == 0)
{
	printf("and is 0\n");
}
	else 
{
	printf("and is less than 6 and not 0\n");
}
	return (0);
}
