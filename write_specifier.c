#include "main.h"

/**
 * write_sp_f - a function that check specifier
 *                      and write and return number of what i print.
 * @_ptr: pointer to argument.
 * @chars: pointer to char in string.
 * Return: len.
 */
int write_sp_f(va_list _ptr, char chars)
{
	unsigned int i = 0, len = 0;

	handle_s_t s[] = {
		{'c', h_char}, {'s', h_string}, {'%', h_percentage},
		{'!', h_Exclamation_mark}, {'K', h_ltr_K}, {'d', h_integer},
		{'i', h_integer}, {'b', h_binary}
		};

	while (i < sizeof(s) / sizeof(s[0]))
	{
		if (chars == s[i].sp_f)
		{
			len += s[i].f(_ptr);
			break;
		}
		i++;
	}
	return (len);
}
