#include "main.h"
/**
 * _printf - create our printf function
 * @format: sting of char.
 * Return: value of len string or -1 if fails
 */
int _printf(const char *format, ...)
{
	int len_string = 0;
	unsigned int i;
	va_list _ptr;
	handle_s_t s[] = {
		{'c', h_char},
		{'s', h_string},
		{'%', h_percentage},
		{'!', h_Exclamation_mark},
		{'K', h_ltr_K}
	};
	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);

	va_start(_ptr, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			i = 0;
			while (i < sizeof(s) / sizeof(s[0]))
			{
				if (*format == s[i].sp_f)
				{
					len_string += s[i].f(_ptr);
					break;
				}
				i++;
			}
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
