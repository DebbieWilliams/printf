#include "main.h"

/**
 * print_reverse - Prints a string in reverse.
 * @args: Argument from _printf.
 * @flags: Pointer to the struct flags (not used in this function).
 *
 * Return: Length of the printed string.
 */
int print_reverse(va_list args, flags_t *flags)
{
	int i = 0;
	char *str = va_arg(args, char *);
	int j;

	(void)flags;

	if (!str)
		str = "(null)";

	while (str[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);

	return (i);
}

/**
 * print_rot13 - Prints a string using ROT13 encryption.
 * @args: List of arguments from _printf.
 * @flags: Pointer to the struct flags (not used in this function).
 *
 * Return: Length of the printed string.
 */
int print_rot13(va_list args, flags_t *flags)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(args, char *);

	(void)flags;

	for (j = 0; str[j]; j++)
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			_putchar(str[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}
