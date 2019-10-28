#include <unistd.h>

/**
 * _putchar - Writes the character
 * Desc: _putchar function
 * @a: char type
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
