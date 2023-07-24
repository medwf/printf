#include "main.h"

/**
 *h_binary - handle with binary number
 *@_ptr: pointeur to an argument
 *Return: len
 */
int h_binary(va_list _ptr)
{
	unsigned int len = 0, i = 0, binary_num = va_arg(_ptr, int);
	char binary[26];

	do {
		binary[i++] = binary_num % 2 + 48;
		binary_num /= 2;
	} while (binary_num != 0);

	binary[i] = '\0';

	len = strlen(binary);

	do {
		write(1, &binary[--i], 1);
	} while (i != 0);
	return (len);
}

/**
 *h_integer - handle with integer number
 *@_ptr: pointeur to an argument
 *Return: len
 */
int h_integer(va_list _ptr)
{
	long int len = 0, i = 0, num = va_arg(_ptr, int);
	char arrays[26];
	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num *= -1;
	}

	do {
		arrays[i] = num % 10 + 48;
		num /= 10;
		i++;
	} while (num > 0);

	if (is_negative == 1)
	{
		arrays[i] = '-';
		arrays[++i] = '\0';
	}
	else
	{
		arrays[i] = '\0';
	}
	do {
		write(1, &arrays[--i], 1);
	} while (i > 0);

	len = strlen(arrays);
	return (len);
}
