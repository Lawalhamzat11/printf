#include "main.h"
/**
  * print_int - prints integer
  * @arg: arument printed
  * Return: length prnted
  */
int print_int(va_list arg)
{
	int len, integer = va_arg(arg, int);

	len = 0;
	len += print_rint(integer, len);
	return (len);
}
/**
  * print_rint - prints integer
  * @integer: argument to print
  * @len: length of printed integer
  * Return: length og the printed integer
  */
int print_rint(long integer, int len)
{
	if (integer < 0)
	{
		_putchar(45);
		integer = -integer;
		len++;
	}
	if (integer > 9)
		len = print_rint(integer / 10, len);
	_putchar((integer % 10) + 48);
	return (len + 1);
}

int print_uint(va_list arg)
{
	int len;
	unsigned int integer = va_arg(arg, unsigned int);

	len = 0;
	len += print_ruint(integer, len);
	return (len);
}

int print_ruint(long integer, int len)
{
	if (integer < 0)
	{
		integer = -integer;
	}
	if (integer > 9)
		len = print_ruint(integer / 10, len);
	_putchar((integer % 10) + 48);
	return (len + 1);
}
