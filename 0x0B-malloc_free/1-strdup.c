#include <stdlib.h>

/**
 * _strdup - duplicates a string.
 * @str: the string to duplicate.
 *
 * Return: On success, returns a pointer
 *         If str is NULL or if memory allocation fails, returns NULL.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	dup_str[i] = str[i];

	return (dup_str);
}
