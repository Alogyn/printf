#include "main.h"

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
