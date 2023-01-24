#include "main.h"
/**
 * print_buf - prints buffer
 * @buf: buffer pointers
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 **/
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
