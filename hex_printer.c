#include "main.h"

/**
 * print_hex - Prints a number in hexadecimal base in lowercase.
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct flags that determines
 * if flags are passed to _printf.
 *
 * Return: The number of characters printed.
 */
int print_hex(va_list args, flags_t *flags)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 1);
	int char_count = 0;

	if (flags->hash == 1 && str[0] != '0')
		char_count += _puts("0x");

	char_count += _puts(str);

	return (char_count);
}


/**
 * print_hex_uppercase - Prints a number in hexadecimal base in uppercase.
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct that determines
 * if flags are passed to _printf.
 * Return: The number of characters printed.
 */
int print_hex_uppercase(va_list args, flags_t *flags)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 0);
	int char_count = 0;

	if (flags->hash == 1 && str[0] != '0')
		char_count += _puts("0X");

	char_count += _puts(str);

	return (char_count);
}
