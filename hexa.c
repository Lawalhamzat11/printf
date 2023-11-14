#include "main.h"
/**
  * print_hexa - prints hexadecimals in lowercase
  * @arg: argument to convert
  * Return: length og hexadecimal bit ptinted
  */
int print_hexa(va_list arg)
{
	unsigned int number;
	int hexa[32];
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
		hexa[i] = number % 16;
		number /= 16;
	}
	i -= 1;
	while (i >= 0)
	{
		if (hexa[i] >= 10)
		{
			_putchar(hexa[i] - 10 + 'a');
		}
		else
		{
			_putchar(hexa[i] + 48);
		}
		i--;
		len++;
	}
	return (len);
}
/**
  * print_HEXA - prints hexadecimal in uppercase
  * @arg: argument to convert
  * Return: length of hexadecimal bit ptinted
  */
int print_HEXA(va_list arg)
{
	unsigned int number;
	int HEXA[32];
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
		HEXA[i] = number % 16;
		number /= 16;
	}
	i -= 1;
	while (i >= 0)
	{
		if (HEXA[i] >= 10)
		{
			_putchar(HEXA[i] - 10 + 'A');
		}
		else
		{
			_putchar(HEXA[i] + 48);
		}
		i--;
		len++;
	}
	return (len);
}
