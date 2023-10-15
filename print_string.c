#include "main.h"

/**
  * print_string - Print the string of characters
  *
  * @argmt_list: Input the argument
  *
  * Return: The length of a string
  */

int print_string(va_list argmt_list)
{
	int length = 0;
	char *strg = va_arg(argmt_list , char *);

	while (*strg != '\0')
	{
		_putchar(*strg);
		strg++;
		length++;
	}

	return (length);
}
