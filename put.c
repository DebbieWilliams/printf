#include "main.h"
#include <unistd.h>

/**
 * _write_buffer - Flushes the buffer to stdout.
 * @buf: Pointer to the buffer.
 * @size: The size of the buffer.
 */
void _write_buffer(char *buf, int size)
{
	write(1, buf, size);
}

/**
 * _putchar - Writes the character c to stdout.
 * @ch: The character to print.
 * Return: On success 1. On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char ch)
{
	static char buf[1024];
	static int i;

	if (i >= 1024)
	{
		_write_buffer(buf, i);
		i = 0;
	}

	if (ch != -1)
	{
		buf[i] = ch;
		i++;
	}

	return (1);
}

/**
 * _puts - Prints a string to stdout.
 * @str: Pointer to the string to print.
 * Return: Number of characters written.
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
