#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - function to add 2 positive numbers
 *@argc: the number of arguments
 *@argv: content of arguments
 *Return: 0 if succcess and 1 if symblos are in the argument
 */

int main(int argc, char *argv[])
{
	int sum;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
	}

	if (isdigit(argv[i]))
	{
		for (i = 1; i < argc - 1; i++)
		{

		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);

		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
