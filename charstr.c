#include "main.h"

/**
 * print_string - Prints a string character by character.
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct flags that determines
 * if flags are passed to _printf.
 *
 * Return: Number of characters printed.
 */
int print_string(va_list args, flags_t *flags)
{
	char *str = va_arg(args, char *);

	(void)flags;

	if (!str)
		str = "(null)";

	return (_puts(str));
}

/**
 * print_char - Prints a single character.
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct flags that determines
 * if flags are passed to _printf.
 *
 * Return: Number of characters printed (always 1).
 */
int print_char(va_list args, flags_t *flags)
{
	(void)flags;

	_putchar(va_arg(args, int));
	return (1);
}
