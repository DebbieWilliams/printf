#include "main.h"

/**
 * convert - Converts a number into a string representation with a given base.
 * @num: The input number.
 * @base: The input base.
 * @lowercase: Flag indicating whether hex values should be lowercase
 * (1 for lowercase, 0 for uppercase).
 *
 * Return: A pointer to the resulting string.
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *charset;
	static char buffer[50];
	char *result_ptr;

	charset = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
	result_ptr = &buffer[49];
	*result_ptr = '\0';

	do {
		*--result_ptr = charset[num % base];
		num /= base;
	} while (num != 0);

	return (result_ptr);
}
