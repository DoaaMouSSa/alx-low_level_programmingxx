#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a function that adds positive numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		int i, sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("%s\n", "Error");
				return (0);
			}
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
