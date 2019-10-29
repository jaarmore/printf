#include "holberton.h"
/**
 * op_c - Entry Point
 * Desc: op_c function
 * @op_l: va_list printf function
 * Return: Char
 */
int op_c(va_list op_l)
{
	char car = va_arg(op_l, int);

	_putchar(car);
	return (1);
}
/**
 * op_s - Entry Point
 * Desc: op_s function
 * @op_l: va_list op_l
 * Return: String
 */
int op_s(va_list op_l)
{
	char *s = va_arg(op_l, char *);

	int cont = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[cont] != '\0')
	{
		_putchar(s[cont]);
		cont++;
	}
	return (cont);
}
/**
 * op_mod - Entry Point
 * Desc: op_mod function
 * @op_l: va_list op_l
 * Return: %
 */
int op_mod(__attribute__((unused)) va_list op_l)
{
	_putchar('%');
	return (1);
}
