#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
  * string - typedef for char *
*/
typedef char *string;
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	string op;
	int (*f)(va_list arg);
} op_t;
int _printf(const char *format, ...);
int print_str(va_list arg);
int _strlen(string str);
int print_mod(va_list arg);
int print_char(va_list arg);
int _putchar(char c);

#endif
