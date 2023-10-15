#include "main.h"

/**
  * _printf - Prints the input data
  *
  * @format: Input data arguments (const char)
  *
  * Return: The length of 'format'
  */

int _printf(const char *format, ...)
{
	unsigned int index = 0, i = 0, length = 0;
	char *buff = malloc(sizeof(char) * 1024);
	va_list list;
	int (*fun)(va_list, char *, unsigned int);

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format[0])
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(buff, format[i], index);
		else
		{
			if (!format[i + 1])
			{
				write(1, buffer, index), free(buff), va_end(list);
				return (-1);
			}
			else
			{	func = format_specifier(format, i + 1);
				if (func)
				{
					length += func(list, buff, index);
					i += specifier_counter(format, i + 1);
				}
				else
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					_putchar(buff, format[i], index), length++, i--;
				}
			} i++;
		} i++;
	}
	write(1, buffer, index), free(buff), va_end(list);
	return (length);
}
