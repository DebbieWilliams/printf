#include "main.h"

/**
 * print_binary - Prints a number in binary base (base 2).
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct that determines
 * if flags are passed to _printf.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args, flags_t *flags)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 2, 0);

	(void)flags;

	return (_puts(str));
}


/**
 * print_octal - Prints a number in octal base (base 8).
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct that determines
 * if flags are passed to _printf.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args, flags_t *flags)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 8, 0);
	int char_count = 0;

	if (flags->hash == 1 && str[0] != '0')
		char_count += _putchar('0');

	char_count += _puts(str);

	return (char_count);
}
