#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with a char
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: If size is 0 or if memory allocation fails, return NULL.
 *         Otherwise, return a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
{
	array[i] = c;
}

	return (array);
}
