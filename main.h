#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @conversion_spec: format specifier
 * @flags: pointer to the correct printing function
 */
typedef struct printHandler
{
	char conversion_spec;
	int (*flags)(va_list ap, flags_t *flags);
} conversionFunc;

int _printf(const char *format, ...);
char *convert(unsigned long int num, int base, int lowercase);
int (*get_print(char specifier))(va_list, flags_t *);
int get_flag(char specifier, flags_t *flags);
int print_int(va_list args, flags_t *flags);
int print_unsigned(va_list args, flags_t *flags);
void print_number(int number);
int count_digit(int num);
int print_address(va_list args, flags_t *flags);
int print_hex(va_list args, flags_t *flags);
int print_hex_uppercase(va_list args, flags_t *flags);
int print_binary(va_list args, flags_t *flags);
int print_octal(va_list args, flags_t *flags);
int print_char(va_list args, flags_t *flags);
int print_string(va_list args, flags_t *flags);
int print_percent(va_list args, flags_t *flags);
int print_special_chars(va_list args, flags_t *flags);
int print_reverse(va_list args, flags_t *flags);
int print_rot13(va_list args, flags_t *flags);
int print_reverse(va_list args, flags_t *flags);
void _write_buffer(char *buf, int size);
int _putchar(char ch);
int _puts(char *str);


#endif
