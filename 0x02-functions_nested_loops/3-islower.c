#include "main.h"
/**
 * main - checks for lowercase character.
 *
 * Return: 0 (success)
 */
int  _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}

