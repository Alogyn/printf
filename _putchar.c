#include "main.h"

/**
  * _putchar - Prints single character
  *
  * @c: Input character (char)
  *
  * Return: The length of the characters inputed
  */

int _putchar(int c)
{
	static int index;
	static char buffer[BUFFER_SIZE];

	if (c == BUFF || index >= BUFFER_SIZE)
	{
		write(1, buffer, index);
		index++;
	}

	if (c != BUFF)
	{
		buffer[index++] = c;
	}
	return (1);
}
