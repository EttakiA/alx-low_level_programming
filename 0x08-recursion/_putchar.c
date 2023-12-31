#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on access 1.
 * on error, -1 is returned, and errno is set apropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
