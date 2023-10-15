#ifndef MAIN_H
#define MAIN_H

/* Standard libraries */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

struct specif
{
	char *type_format;
	int (*f)(va_list, char *, unsigned int);
};

typedef struct specif specif_t;

/* 'printf' function */
int _printf(const char *format, ...);

/* Function to print a buffer of characters*/
unsigned int _putchar(char *buffer, char c, unsigned int index);

/* Task 0: Functions to print characters, strings and percent */
int print_character(va_list list, char *buffer, unsigned int index);
int print_string(va_list list, char *buffer, unsigned int index);
int print_percent(va_list a __attribute__((unused)), char *buffer, unsigned int i);

/* Format and specifier functions */
int (*format_specifier(const char *str, int index))(va_list, char *, unsigned int);
int specifier_counter(const char *str, int index);

#endif /* MAIN_H */
