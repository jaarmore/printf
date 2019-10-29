#include "holberton.h"
#include <stdio.h>
/**
 * op_c - Entry Point
 * Desc: op_c function
 * @op_l: va_list printf function
 * Return: Char
 */
int op_c(va_list op_l)
{
	_putchar(va_arg(op_l, int));
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

	int i = 0, cont = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
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
