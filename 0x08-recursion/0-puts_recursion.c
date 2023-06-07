#include <stdio.h>
#include "main.h"

/**
 *_puts_recursion - a function that prints a string, followed by a new line
 * @s: input
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
    		{
		printf("\n");
        	return;
    		}
    	printf("%c" ,*s);
    	_puts_recursion(++s);
}
