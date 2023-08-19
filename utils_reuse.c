#include "main.h"

/**
 * printed - determines whether a char is printed
 * @a: Char to be evaluated.
 *
 * Return: 1 if a is printed, 0 otherwise
 */
int printed(char a)
{
	if (a >= 32 && a < 127)
		return (1);

	return (0);
}

/**
 * append_hexa - Append aSCII in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: appending will start at this index
 * @aSCII: ASCII CODE.
 * Return: Always 3
 */
int append_hexa(char aSCII, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexadecimal format is always 2 digits longer */
	if (aSCII < 0)
		aSCII *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[aSCII / 16];
	buffer[i] = map_to[aSCII % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is a digit
 * @a: Char to be evaluated
 *
 * Return: 1 if a is a digit,otherwise 0
 */
int is_digit(char a)
{
	if (a >= '0' && a <= '9')
		return (1);

	return (0);
}

/**
 * num_size_convert - A number is cast to the provided size
 * @num: The number to be casted.
 * @size: The number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long num_size_convert(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * unsgnd_size_convert - Casts a number to the provided size
 * @num: The number to be casted
 * @size: The number indicating the type to be casted
 *
 * Return: Casted value of num
 */
long int unsgnd_size_convert(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

