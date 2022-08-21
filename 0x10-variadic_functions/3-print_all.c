#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * integer_print - print integers.
 * @args: the list of parameters
 * Return:no return a void func.
 */
void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * char_print - print chars
 * @args: the list of parameters
 * Return:no return a void func.
 */
void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * string_print - print strings
 * @args: the list of parameters
 * Return:no return a void func.
 */
void string_print(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * float_print - print floats.
 * @args: the list of parameters
 * Return:no return a void func.
 */
void float_print(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - print anything.
 * @format: the paramaters
 * Return: this function no return
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator;
	args_t arguments[] = {
		{"c", char_print},
		{"i", integer_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	separator = "";

	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *(arguments[j]).format)
			{
				printf("%s", separator);
				arguments[j].function(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
