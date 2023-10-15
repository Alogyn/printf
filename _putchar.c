#include "main.h"


/**
* _putchar - Add the characters to a buffer and
* prints them all by index
*
* @buffer: Buffer array (char)
* @c: Input character (char)
* @index: Number of buffer index
*
* Return: The number of buffer index
*/


unsigned int _putchar(char *buffer, char c, unsigned int index)
{
	if (index >= 1024)
	{
		write(1, buffer, index);
		index = 0;
	}
	buffer[index] = c;
	index++;
	return (index);
}
