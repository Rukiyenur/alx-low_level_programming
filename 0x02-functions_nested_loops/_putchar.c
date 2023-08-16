#include <unistd.h>
#include <main.h>
/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char x)
{
    return write(1, &x, 1);
}

