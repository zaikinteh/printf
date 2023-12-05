#include <unistd.h>
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

int _printf(const char *format, ...)
{
	va_list myval;
	
	int num_of_chars = 0;
	
	int s;
	char c;

	va_start(myval, format);
	while (*format != '\0')
	{
		while (*format != '%')
			write(1, format, 1);
		format++;
		num_of_chars++;
		{
			if (*format == 'c')
			{
				va_arg(myval, int);
				write(1, format, c );
			}
			else if (*format == 's')
			{
				va_arg(myval, int); 
				write(1, format, s );
			}
			else if (*format == '%')
			{
				write(1, format, 1);
			}
		}
		format++;
		num_of_chars++;

		va_end(myval);
	}
	return (num_of_chars);
}
