#include "main.h"
/**
  * print_bin - prints binary
  * @arg: argument to convert
  * Return: length og binary bit ptinted
  */
int print_bin(va_list arg)
{
	unsigned int number;
	int binary[32];
	int i, len;

	len = 0;
	number = va_arg(arg, unsigned int);

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}

	for (i = 0; number > 0; i++)
	{
		binary[i] = number % 2;
		number /= 2;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(binary[i] + 48);
		i--;
		len++;
	}
	return (len);
}
/**
  * print_oct - prints octal
  * @arg: argument to convert
  * Return: length of octal bit ptinted
  */
int print_oct(va_list arg)
{
	unsigned int number;
	int octal[32];
	int i, len;

	len = 0;
	number = va_arg(arg, unsigned int);

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}

	for (i = 0; number > 0; i++)
	{
		octal[i] = number % 8;
		number /= 8;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(octal[i] + 48);
		i--;
		len++;
	}
	return (len);
}
