#ifndef _HOLBERTON
#define _HOLBERTON

int _putchar(char c);

/**
 * reset_to(* - updates the value it points to to 98.
 * @n: the parameter to be updated
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: argument one
 * @b: argument two
 * */

void swap_int(int *a, int *b);

/**
 * _strien - conts the length of a string
 * @s: a string to be counted
 * Return: The length of the string
 */

int _srien(char *s);

/**
 * puts2 - prints every other character
 * @str: the string
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string followed by a new line
 * @str: the argument
 */

void puts_half(char *str);


void print_array(int *a,int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif

