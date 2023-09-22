#include "main.h"

/**
 * get_print - Selects the appropriate printing function
 * based on the conversion specifier.
 * @specifier: The conversion specifier character.
 *
 * Return: A pointer to the matching printing function,
 * or NULL if no match is found.
 */
int (*get_print(char specifier))(va_list, flags_t *)
{
	conversionFunc func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_uppercase},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_reverse},
		{'S', print_special_chars},
		{'p', print_address},
		{'%', print_percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].conversion_spec == specifier)
			return (func_arr[i].flags);

	return (NULL);

}
