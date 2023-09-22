#include "main.h"

/**
 * print_address - Prints the address of input in hexadecimal format.
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct flags that determines
 * if flags are passed to _printf.
 *
 * Return: Number of characters printed.
 */
int print_address(va_list args, flags_t *flags)
{
	char *str;
	unsigned long int address = va_arg(args, unsigned long int);

	int char_count = 0;

	(void)flags;

	if (!address)
		return (_puts("(nil)"));

	str = convert(address, 16, 1);
	char_count += _puts("0x");
	char_count += _puts(str);

	return (char_count);
}
