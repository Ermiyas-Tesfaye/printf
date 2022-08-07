#include <unistd.h>
#include "main.h"
/**
 * _putchar - function to write a character
 * @c: character to be written
 * Return: always 1 in success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
