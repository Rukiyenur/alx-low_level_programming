#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: a string as a parameter and reverses it
 */
void rev_string(char *s)
{
    int length = 0;
    int i;
    char j;

    while (s[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        j = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = j;
    }
}
