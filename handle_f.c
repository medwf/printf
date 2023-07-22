#include "main.h"

/**
 *h_char - handle char.
 *c: char.
 *@_ptr: pointer va_list
 *Return: value 1.
 */
int h_char(va_list _ptr)
{
	char c = va_arg(_ptr, int);

	return (write(1, &c, 1));
}

/**
 *h_string - handle string.
 *s: string.
 *@_ptr: pointer va_list
 *Return: value len of string.
 */
int h_string(va_list _ptr)
{
	char *s = va_arg(_ptr, char *);
	int len = 0;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}

	len = strlen(s);
	write(1, s, len);

	return (len);
}

/**
 *h_percentage - handle percentage.
 *@_ptr: pointer va_list
 *Return: value 1.
 */
int h_percentage(va_list __attribute__((__unused__)) _ptr)
{
	return (write(1, "%%", 1));
}

/**
 *h_Exclamation_mark - handle exclanation mark.
 *@_ptr: pointer va_list
 *Return: value 2.
 */
int h_Exclamation_mark(va_list __attribute__((__unused__)) _ptr)
{
	return (write(1, "%!", 2));
}


/**
 *h_ltr_K - handle liter K.
 *@_ptr: pointer va_list
 *Return: value 2.
 */
int h_ltr_K(va_list __attribute__((__unused__)) _ptr)
{
	return (write(1, "%K", 2));
}
