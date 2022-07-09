#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: the character
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
