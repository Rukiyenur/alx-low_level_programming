#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments.
 * @av: an array of strings containing the arguments.
 *
 * Return: On success, returns a pointer
 *         If ac is 0, av is NULL, or if memory allocation fails, returns NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
	len++;
	len++;
}

	str = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	return (NULL);

	for (i = 0, k = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++, k++)
	str[k] = av[i][j];
	str[k] = '\n';
	k++;
}

	str[k] = '\0';

	return (str);
}
