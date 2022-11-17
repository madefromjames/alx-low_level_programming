#include "variadic_functions.h"
void print_all(const char * const format, ...);
void print_chars(va_list c);
void print_ints(va_list i);
void print_floats(va_list f);
void print_str(va_list str);
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *coma = "";
	unsigned int i, j;

	fmt_type  ops[] = {
		{'c', print_chars},
		{'i', print_ints},
		{'f', print_floats},
		{'s', print_str}
	};

	va_start(arg, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].c)
			{
				printf("%s", coma);
				ops[j].type_args(arg);
				coma = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);

}
/**
 * print_chars - prints a char
 * @c: char to be printed
 * Return: char
 */
void print_chars(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_ints - prints an integer
 * @i: integer to be printed
 * Return: an integer
 */
void print_ints(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_floats - print a float
 * @f: float to be printed
 * Return: float
 */
void print_floats(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_str - print string
 * @s: string to be printed
 * Return: string
 */
void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
