#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 always
 */
int  isalpha(int c)
{
	if((c >= 97 && c <= 122) || ( c >= 65 && c <= 90))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}

