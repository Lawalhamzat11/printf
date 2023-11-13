#include "main.h"
/**
  * print_char - prints a character
  * @arg: argument to print
  * Return: 1, char printed
  */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
/**
  * print_mod - prints a modulo
  * @arg: unused in this function
  * Return: 1 i.e the mod printed
  */
int print_mod(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}
/**
  * _strlen - length of a string
  * @s: string passed as argument
  * Return: len of the string
  */
int _strlen(string s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
  * print_str - prints a string
  * @arg: argument to print
  * Return: len of the string printed to stdout
  */
int print_str(va_list arg)
{
	int i, len;
	string str = va_arg(arg, char *);

	if (!str)
		str = "(null)";
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
