#include "main.h"

/** print_character - Prints characters from arguments
  *
  * @argmy_list: The argument list
  *
  * Return: 1
  */

int print_character(va_list argmt_list)
{
	_putchar(va_arg(argmt_list, int));
	return (1);
}
