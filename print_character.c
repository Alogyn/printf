#include "main.h"

/**
  * print_character - Prints a single character
  *
  * @list: Input argument character (char)
  * @buffer: Buffer array (char)
  * @index: Number of buffer index (int)
  *
  * Return: Always 1 (Success)
  */
  
int print_character(va_list list, char *buffer, unsigned int index)
{
	_putchar(buffer, va_arg(list, int), index);

	return (1);
}
