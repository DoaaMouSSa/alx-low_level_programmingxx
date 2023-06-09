#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a function that  multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int sum = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
