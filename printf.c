#include "holberton.h"

/**
 * _printf - Entry Point
 * Desc: _printf function
 * @format: format type
 * Return: Function that produces output according to a format.
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"c", op_c},
		{"s", op_s},
		{"%", op_mod},
		{NULL, NULL}
	};

	va_list op_l;
}
