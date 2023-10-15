#include "main.h"

/**
  * print_percent - Prints a percent sign
  *
  * @a: Input character (unused)
  * @buffer: Buffer array (char)
  * @i: Number of buffer index (int)
  *
  * Return: Always 1 (Success)
  */

int print_percent(va_list a __attribute__((unused)), char *buffer, unsigned int i)
{
	_putchar(buffer, '%', i);

	return (1);
}
