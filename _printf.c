#include "main.h"

/*
 * 0x11. C - printf Project
 */

/**
  * _printf - Print the Input value
  *
  * @format: Input values (const chaa)
  *
  * Return: The length of value inputed, '-1' in case fail
  */

int _printf(const char *format, ...)
{
	va_list argmt_list;
	int char_pos = 0, length = 0;
	char c;

	va_start(argmt_list, format);
	if (!format || (format[0] == '%' && (format[1] == '\0' ||
				(format[1] == ' ' && format[2] == '\0'))))
		return (-1);
	while (format[char_pos])
	{
		if (format[char_pos] != '%')
			write(1, &format[char_pos], 1);
		else
		{
			char_pos++;
			if (format[char_pos] == 'c')
			{
				c = va_arg(argmt_list, int);
				write(1, &c, 1);
				length++;
			}
			else if (format[char_pos] == 's')
				print_string(argmt_list);
			else if (format[char_pos] == '%')
				_putchar(format[char_pos]);
		}
		char_pos++;
		length++;
	}
	va_end(argmt_list);
	return (length);
}
