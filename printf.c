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
	unsigned int i = 0, j;

	va_start(op_l, format);


	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] == '%')
			while (ops[j].op != NULL)
			{
				if (format[i + 1] == op_s[j].op[0])
				{
					ops[j].f(op_l);
				}
				j++;
			}
		i++;
	}
	va_end(op_l);

}
