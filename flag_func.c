#include "main.h"

/**
 * get_flag - Sets flags in the 'flags_t' struct if found in the format string.
 * @specifier: The character that holds the flag specifier.
 * @flags: A pointer to the 'flags_t' struct where flags are turned on.
 *
 * Return: 1 if a flag has been turned on, 0 otherwise.
 */
int get_flag(char specifier, flags_t *flags)
{
	int flag_found = 0;

	if (specifier == '+')
		{
		flags->plus = 1;
		flag_found = 1;
	}
	else if (specifier == ' ')
	{
		flags->space = 1;
		flag_found = 1;
	}
	else if (specifier == '#')
	{
		flags->hash = 1;
		flag_found = 1;
	}

	return (flag_found);
}
