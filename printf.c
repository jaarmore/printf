#include "holberton.h"

/**
 * _printf - Entry Point
 * Desc: _printf function
 * @format: format type
 * Return: Function that produces output according to a format.
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {{"c", op_c}, {"s", op_s}, {"%", op_mod}, {"\n", op_c},
		      {NULL, NULL}};
	va_list op_l;
	unsigned int i = 0, j;
	int cont = 0, bandera = 0;

	if (format == NULL)
		return (-1);
	va_start(op_l, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		j = 0;
		if (format[i] == '%')
		{
			if (format[(i + 1)] == '\0')
				return (-1);
			while (ops[j].op != NULL)
			{
				if (format[i + 1] == ops[j].op[0])
				{
					cont += ops[j].f(op_l);
					bandera++;
				}
				j++;
			}
			if (bandera > 0)
				i++;
			else
				_putchar(format[i]);
		}
		else
		{
			_putchar(format[i]);
			cont++;
		}
	}
	va_end(op_l);
	return (cont);
}
