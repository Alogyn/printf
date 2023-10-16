#ifndef MAIN_H
#define MAIN_H

/* Standard libreries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* '_printf.c function */
int _printf(const char *format, ...);

/* Task 0: Functions to print characters, strings and percent */
int print_character(va_list arg_list, char *buffer, unsigned int index);
int print_string(va_list arg_list, char *buffer, unsigned int index);
int print_percent(va_list __attribute__((unused)), char *, unsigned int);

/* Task 1: Functions to print integers and digits */
int print_integer(va_list arg_list, char *buffer, unsigned int index);
int print_digit(va_list arg_list, char *buffer, unsigned int index);

/* Task 2: Functions to convertes and prints integers to binary */
int print_binary(va_list arg_list, char *buffer, unsigned int index);
char *input_to_binary(char *binary, long int number, int check_negative, int max_size);

/* Task 3: Functions to convertes and prints integers to octal and unsigned integer */
int print_octal(va_list arg_list, char *buffer, unsigned int index);
char *fill_oct_array(char *bin, char *oct);
int print_unsigned(va_list arg_list, char *buffer, unsigned int index);

/* Task 3: Functions to convertes and prints integers to upper and lower hexadicimal */
int print_lower_hexa(va_list arg_list, char *buffer, unsigned int index);
int print_upper_hexa(va_list arg_list, char *buffer, unsigned int index);

#endif /* MAIN_H */
