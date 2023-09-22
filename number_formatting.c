#include "main.h"

/**
 * print_int - Prints an integer.
 * @args: va_list of arguments from _printf.
 * @flags: Pointer to the struct flags determining
 * if flags are passed to _printf.
 *
 * Return: Number of characters printed.
 */
int print_int(va_list args, flags_t *flags)
{
	int num = va_arg(args, int);
	int result = count_digit(num);

	if (flags->space == 1 && flags->plus == 0 && num >= 0)
		result += _putchar(' ');

	if (flags->plus == 1 && num >= 0)
		result += _putchar('+');

	if (num <= 0)
		result++;

	print_number(num);

	return (result);
}


/**
 * print_unsigned - Prints an unsigned integer.
 * @args: va_list of arguments from _printf.
 * @flags: Pointer to the struct flags determining
 * if flags are passed to _printf.
 *
 * Return: Number of characters printed.
 */
int print_unsigned(va_list args, flags_t *flags)
{
	unsigned int u = va_arg(args, unsigned int);
	char *str = convert(u, 10, 0);

	(void)flags;

	return (_puts(str));
}


/**
 * print_number - Helper function that recursively
 * prints all digits of an integer.
 * @number: The integer to be printed.
 */
void print_number(int number)
{
	unsigned int n1;

	if (number < 0)
	{
		_putchar('-');
		n1 = (unsigned int)(-number);
	}
	else
	{
		n1 = (unsigned int)number;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}


/**
 * count_digit - Returns the number of digits in an integer for _printf.
 * @num: The integer to evaluate.
 *
 * Return: Number of digits.
 */
int count_digit(int num)
{
	unsigned int digitCount = 0;
	unsigned int absoluteNum;

	if (num < 0)
	{
		absoluteNum = (unsigned int)(-num);
	}
	else
	{
		absoluteNum = (unsigned int)num;
	}

	while (absoluteNum != 0)
	{
		absoluteNum /= 10;
		digitCount++;
	}

	return (digitCount);
}
