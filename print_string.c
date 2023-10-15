#include "main.h"

/**
  * print_string - Prints a string of characters
  *
  * @list: Input argument character (char)
  * @buffer: Buffer array (char)
  * @index: Number of buffer index (int)
  *
  * Return: If success, 'i' the number of string characters,
  * '6' id (nill)
  */
int print_string(va_list list, char *buffer, unsigned int index)
{
	unsigned int i;
	char *str;
	char nul[] = "(null)";

	str = va_arg(list, char *);
	if (str)
	{
		while (str[i])
		{
			index = _putchar(buffer, str[i], index);
			i++;
		}
	}
	else
	{
		while (nil[i])
			index = _putchar(buffer, nul[i], index);
		return (6);
	}
