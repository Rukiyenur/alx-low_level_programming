#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: On success, returns a pointer to an array of returns NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len = 0, word_count = 0;

	if (str == NULL || *str == '\0')
	return (NULL);

	for (i = 0; str[i]; i++)
	{
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	word_count++;
}

	if (word_count == 0)
	return (NULL);

	words = (char **)malloc((word_count + 1) * sizeof(char *));
    
	if (words == NULL)
	return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
{
	while (str[j] == ' ')
	j++;
        
	len = 0;
	while (str[j + len] != ' ' && str[j + len] != '\0')
	len++;
        
	words[i] = (char *)malloc((len + 1) * sizeof(char));
        
	if (words[i] == NULL)
{
	for (k = 0; k < i; k++)
	free(words[k]);
	free(words);
	return (NULL);
}
        
	for (k = 0; k < len; k++)	
	words[i][k] = str[j + k];
	words[i][k] = '\0';

	j += len;
}

	words[word_count] = NULL;

	return (words);
}
