#include "main.h"

/**
 * print_percent - Prints a percent character '%'.
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct flags
 * (not used in this function).
 *
 * Return: Number of characters printed (always 1).
 */
int print_percent(va_list args, flags_t *flags)
{
	(void)args;
	(void)flags;

	return (_putchar('%'));
}
