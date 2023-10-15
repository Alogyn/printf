#ifndef MAIN_H
#define MAIN_H

/* Standard libraries */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/* To minimis the use of 'write' */
#define BUFFER_SIZE 1024

/* Define the buffer return */
#define BUFF -1

/* 'printf' function */
int _printf(const char *format, ...);

/* Function to print a character */
int _putchar(int c);

/* Task 0: Functions to print characters and strings*/
int print_character(va_list argmt_list);
int print_string(va_list argmt_list);

#endif /* MAIN_H */
