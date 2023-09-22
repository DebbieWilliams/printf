#include "main.h"

/**
 * print_special_chars - Print non-printable characters
 * as "\\xXX" in hexadecimal.
 * @args: va_list arguments from _printf.
 * @flags: Pointer to the struct flags (not used in this function).
 *
 * Return: Number of characters printed.
 */
int print_special_chars(va_list args, flags_t *flags)
{
	int char_count = 0;
	char *hex_repr;
	char *str = va_arg(args, char *);
	int index;

	(void)flags;

	if (!str)
		return (_puts("(null)"));

	for (index = 0; str[index]; index++)
	{
		if (str[index] > 0 && (str[index] < 32 || str[index] >= 127))
		{
			_puts("\\x");
			char_count += 2;
			hex_repr = convert(str[index], 16, 0);
			if (!hex_repr[1])
				char_count += _putchar('0');
			char_count += _puts(hex_repr);
		}
		else
		{
			char_count += _putchar(str[index]);
		}
	}

	return (char_count);
}
