#include  <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format - a character string that handles the following conversion
 * specifiers: "c" for a character, "s" for a string and
 * "%" for a percent sign.
 * Return - number of characters printed (excluding the null byte used
 * to end output to strings).
 */

int _printf(const char *format, ...);
{
	va_list myval;

	num_of_chars = 0;

	int i = *format;

	va_start(myval, *format);
	if (i == '\0')
		return (num_of_chars);
	else if (i == '%')
		i++;
	{
		if (i == 'c')
			_printf("%c is a char" i);
		else if (i == 's')
			_printf("%s is a string" i);
		else
			_printf("%% is a percent sign" i);
	}
	num_of_chars++;
	else
		num_of_chars++;
	format++;
	va_arg(myval, *format);

	va_end(myval);
}
