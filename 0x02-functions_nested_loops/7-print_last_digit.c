#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int)
{
	int l;
	l = n % 10 ;
	if (l < 0)
	{
		_putchar(-l + 48);
		return(-l);
	}
	else
	{
		_putchar(l + 48);
		return(l);
	}
}
