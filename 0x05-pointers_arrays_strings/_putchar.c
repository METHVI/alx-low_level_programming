#include <unistd.h>

/**
 * putchar - writes character c to stdout
 * @n: char to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
