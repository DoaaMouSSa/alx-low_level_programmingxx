#include <stdio.h>
#include "main.h"

/**
 * main - a function that print the number of arguments passed into it
 * @argc: int
 * @argv: array of strings
 * Return: 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
