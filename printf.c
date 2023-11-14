#include "main.h"
/**
  * _printf - prints arguments passed to stdout
  * @format: arguments
  * Return: length print stdout
  */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int i, j, len;
	va_list arg;

	op_t ops[] = {
		{"s", print_str},
		{"c", print_char},
		{"%", print_mod},
		{"i", print_int},
		{"d", print_int},
		{"b", print_bin},
		{NULL, NULL}
	};

	va_start(arg, format);
	len = 0;

	if (format == NULL)
		return (-1);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			j = 0;
			while (ops[j].op)
			{
				if (format[i + 1] == *(ops[j].op))
				{
					break;
				}
				j++;
			}
			if (j < 6)
			{
				len += ops[j].f(arg);
				i += 1;
			}
			else
			{
				_putchar(format[i]);
				len++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
