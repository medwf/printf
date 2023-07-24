#ifndef MAIN_H
#define MAIN_H
/* include lib */
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
*struct handle - struct to handle char
*@sp_f: handle some char
*@f: the function associated
*/
typedef struct handle
{
	char sp_f;
	int (*f)(va_list);
} handle_s_t;

/*my prototybe*/
int _printf(const char *format, ...);
int h_char(va_list);
int h_string(va_list);
int h_percentage(va_list);
int h_Exclamation_mark(va_list);
int h_ltr_K(va_list __attribute__((__unused__)) _ptr);
int h_integer(va_list _ptr);
int write_sp_f(va_list _ptr, char chars);
int h_binary(va_list _ptr);

#endif /*MAIN_H*/
