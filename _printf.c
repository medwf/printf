#include "main.h"
/**
 * _printf - create our printf function
 * @format: sting of char.
 * Return: value of len string or -1 if fails
 */
int _printf(const char *format, ...)
{
	char chars;
	int len_string = 0;
	va_list _ptr;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);

	va_start(_ptr, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			chars = *format;
			len_string += write_sp_f(_ptr, chars);
		}
		else
		{
			write(1, format, 1);
			len_string++;
		}
		format++;
	}
	va_end(_ptr);
	return (len_string);
}
