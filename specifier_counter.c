#include "main.h"

/**
  * specifier_counter - Counts the number of specifier characters
  *
  * @str: The string argument (const char)
  * @index: Number of argument index (int)
  *
  * Return: The number of specifiers
  */
int specifier_counter(const char *str, int index)
{
	int i = 0, j = 0, k = index;
	specif_t arr[] = {
		{"c", print_character}, {"s", print_string},
		{"%", print_percent}, {NULL, NULL},
	};

	while (arr[i].type_format)
	{
		if (str[index] == arr[i].type_format[j])
		{
			if (arr[i].type_format[j + 1])
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = k;
		}
	}
	return (j);
}
